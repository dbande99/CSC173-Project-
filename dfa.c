//
// Created by Evan on 1/29/2019.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "nfa.h"
#include "dfa.h"

#define REJECT -1
#define LOOP INT_MAX
#define EMPTY INT_MIN

DFA NFAtoDFA(NFA nfa)
{
    DFA d = new_DFA(nSize(nfa));
    d->matrix = copyOfMatrix(nfa);


    return d;
}

DFA new_DFA(int states)
{
    DFA d = (DFA) malloc(sizeof(DFA) + sizeof(int**));

    d->size = states;
    d->current_state = 0;
    d->matrix = new_matrix(states);

    return d;
}




void DFA_get_transition(DFA dfa, char sym)
{
    //If intMax, means loop on self
    if(dfa->matrix[dState(dfa)][dState(dfa)] == LOOP)
    {
        return;
    }
    for(int transition = 0; transition < dSize(dfa); transition++)
    {
        //printf("%dfa %dfa %c %c \n", dfa->states, transition, dfa->matrix.matrix[dfa->states][transition], symb);
        if(dfa->matrix[dState(dfa)][transition] == sym)
        {
            dSetState(dfa, transition);
            break;
        }
        //LOOP - sym means loop on all but that symbol
        else if(dfa->matrix[dState(dfa)][transition] != EMPTY && dfa->matrix[dState(dfa)][transition] != LOOP)
        {
            if(LOOP - dfa->matrix[dState(dfa)][transition] != sym)
            {
                dSetState(dfa, transition);
            }
        }
            //did not find transition
        else if(transition == dSize(dfa) - 1)
        {
            dSetState(dfa, REJECT);
        }
    }
}

int DFA_execute(DFA dfa, char *input)
{
    int length = strlen(input);
    for(int i = 0; i < length; i++)
    {
        if(dState(dfa) != REJECT)
        {
            DFA_get_transition(dfa, input[i]);
        }
    }
    return dState(dfa)+1 == dSize(dfa);
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
    for(int i = 0; i < strlen(str); i++)
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

int** copyOfMatrix(NFA n)
{
    int** matrix = new_matrix(n->size);
    for(int i = 0; i < n->size; i++)
    {
        for(int j = 0; j < n->size; j++)
        {
            matrix[i][j] = n->matrix[i][j];
        }
    }
    return matrix;
}

void DFA_free(DFA d)
{
    for(int i=0; i < d->size; i++)
    {
        free(d->matrix[i]);
    }
    free(d->matrix);
    free(d);
}
