#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "HashSet.h"
#include "nfa.h"
#include "dfa.h"

#define REJECT -1
#define LOOP INT_MAX
#define EMPTY INT_MIN
//All input symbols except the existing transitions
#define ALLEXCEPT INT_MAX - 1

DFA NFAtoDFA(NFA nfa)
{
    int size = nSize(nfa);
    DFA dfa = new_DFA(size);

    copyOfMatrix(nfa, dfa);

    //Generate subsets
    HashSet hash = new_HashSet(size);
    generateSubSet(dfa, hash);
   for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {

        }
    }

    int* repeat = initArr(size);

    for(int state = 0; state < size; state++)
    {
        for(int subset = 0; subset < size; subset++)
        {
            if(hash->set[subset][state] == EMPTY)
            {
                repeat[state] = -1;
            }
        }
    }

    int repeated = -1;
    for(int i = 0; i < size; i++)
    {
        if(repeat[i] == EMPTY)
        {
            repeated = i;
        }
    }

    char trans = -1;
    int check;

    for(int i = 0; i < size; i++)
    {
        check = dfa->matrix[repeated][i];
        if(check != EMPTY && check != LOOP)
        {
            trans = (char) check;
        }
    }

    dfa->matrix[repeated][repeated] = ALLEXCEPT;

    for(int subset = 0; subset < size; subset++)
    {
        dfa->matrix[subset][repeated] = ALLEXCEPT;
        if(subset)
        {
            dfa->matrix[subset][repeated + 1] = trans;
        }
    }
    free(repeat);
    hFree(hash);
    return dfa;
}
void generateSubSet(DFA dfa, HashSet hash)
{
    int size = dSize(dfa);
    int trans = EMPTY;
    int loop = 0;

    int* subset = newSubSet(size);

    for(int state = 0; state < size; state++)
    {
        loop = 0;
        if(dfa->matrix[state][state] == LOOP)
        {
            loop = 1;
        }
        for(int transition = 0; transition < size; transition++)
        {
            trans = dfa->matrix[state][transition];

            if(loop && trans != LOOP && trans != EMPTY)
            {
                subset[state] = state;
            }
            //If there is no LOOP then the state is removed and transitions to next
            if(transition == size - 1 && loop == 0)
            {
                subset[state] = state;
                addSubSet(hash, subset);
                //printSubSet(subset, size);
                subset[state] = EMPTY;
            }
            //If there is a loop, all future subsets will have this state
            else if(transition == size - 1)
            {
                //printSubSet(subset, size);
                addSubSet(hash, subset);
            }
        }
    }
    free(subset);
}
DFA new_DFA(int states)
{
    DFA dfa = (DFA) malloc(sizeof(DFA) + sizeof(int**));

    dfa->size = states;
    dfa->current_state = 0;
    dfa->matrix = new_matrix(states);

    return dfa;
}

void DFA_get_transition(DFA dfa, char sym)
{
    int curr = dState(dfa);
    //except marker
    int* except = (int*) malloc(2 * sizeof(int));
    except[0] = 0;
    except[1] = 0;
    if(dfa->matrix[curr][curr] == LOOP)
    {
        free(except);
        return;
    }
    for(int transition = 0; transition < dSize(dfa); transition++)
    {
        if(dfa->matrix[curr][transition] == ALLEXCEPT)
        {
            except[0] = 1;
            except[1] = transition;
        }
        //sym * -1 means loop on all but this sym
        if(dfa->matrix[curr][transition] < 0 && dfa->matrix[curr][transition] != EMPTY)
        {
            if(dfa->matrix[curr][transition] != sym * -1)
            {
                free(except);
                return;
            }
        }

        if(dfa->matrix[curr][transition] == sym)
        {
            dSetState(dfa, transition);
            break;
        }
        //Did not find transition
        else if(transition >= dSize(dfa) - 1 && !except[0])
        {
            dSetState(dfa, REJECT);
        }
        else if(transition >= dSize(dfa) - 1)
        {
            dSetState(dfa, except[1]);
        }
    }
    free(except);
}

int DFA_execute(DFA dfa, char *input)
{
    int length = (int) strlen(input);
    dfa->current_state = 0;
    for(int i = 0; i < length; i++)
    {
        if(dState(dfa) != REJECT)
        {
            DFA_get_transition(dfa, input[i]);
        }
    }
    return dState(dfa) + 1 == dSize(dfa);
}

int dSize(DFA dfa)
{
    return dfa->size;
}

int dState(DFA dfa)
{
    return dfa->current_state;
}

void dSetState(DFA dfa, int state)
{
    dfa->current_state = state;
}

void dAdd(DFA dfa, int src, int dst, int sym)
{
    dfa->matrix[src][dst] = sym;
}

void dAdds(DFA dfa, char *str)
{
    for(int i = 0; i < (int) strlen(str); i++)
    {
        dAdd(dfa, i, i+1, str[i]);
    }
}

int** new_matrix(int states)
{
    int** matrix = (int**) malloc(states * sizeof(int*));

    for(int i = 0; i < states; i++)
    {
        matrix[i] = (int*) malloc(states * sizeof(int));

        for(int j = 0; j < states; j++)
        {
            matrix[i][j] = EMPTY;
        }
    }
    return matrix;
}

void copyOfMatrix(NFA nfa, DFA dfa)
{
    for(int i = 0; i < nfa->size; i++)
    {
        for(int j = 0; j < nfa->size; j++)
        {
            dfa->matrix[i][j] = nfa->matrix[i][j];
        }
    }
}

void dFree(DFA d)
{
    for(int i=0; i < d->size; i++)
    {
        free(d->matrix[i]);
    }
    free(d->matrix);
    free(d);
}
