//
// Created by Evan on 2/5/2019.
//
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "nfa.h"
#include "dfa.h"

#define LOOP INT_MAX
#define EMPTY INT_MIN


NFA new_NFA(int nstates)
{
    NFA nfa = (NFA) malloc(sizeof(NFA) + sizeof(int**) + sizeof(int*));

    nfa->size = nstates;
    /*Multiple current states instead of one
     *EMPTY means currently not in that state
     *e.g. {0, EMPTY, EMPTY, 3, 4}
     *Less efficient than a list but faster to implement
    */

    nfa->states = initArr(nstates);
    nfa->states[0] = 0;

    nfa->matrix = new_matrix(nstates);

    return nfa;
}
//Transition on symbol for all current states
void nTrans(NFA nfa, char sym)
{
    //newStates contains the updated states
    int* newStates = initArr(nSize(nfa));
    //Transition counter needed to check if any transitions happened
    int trans = 0;

    //For each current state
    for(int state = 0; state < nSize(nfa);state++)
    {
        //State EMPTY means not in it
        if(nfa->states[state] != EMPTY)
        {
            //For all transitions a.k.a. row of AdjMatrix
            for (int transition = 0; transition < nSize(nfa); transition++)
            {
                if (nfa->matrix[state][transition] == sym)
                {
                    newStates[transition] = transition;
                    trans++;
                }
                else if(nfa->matrix[state][transition] == LOOP)
                {
                    newStates[state] = state;
                    trans++;
                }
                //No transitions present
                else if (!trans && transition == nSize(nfa) - 1)
                {
                    newStates[state] = EMPTY;
                }
            }
            trans = 0;
        }
    }
    //Copy newStates to NFA's states
    for(int i = 0; i < nSize(nfa); i++)
    {
        nfa->states[i] = newStates[i];
    }
    free(newStates);
}
//Executes NFA on some input string
int NFA_execute(NFA nfa, char *input)
{

    for(int i = 0; i < strlen(input); i++)
    {
        nTrans(nfa, input[i]);
    }
    for(int i = 0; i < nSize(nfa); i++)
    {

        //At least one state must be in accepting
        if (nfa->states[i] + 1 == nSize(nfa))
        {
            return 1;
        }
    }
    return 0;
}

int nSize(NFA nfa)
{
    return nfa->size;
}
//Adds edge to AdjMatrix e.g. 'c' to [0][1]
void nAdd(NFA nfa, int src, int dst, int sym)
{
    nfa->matrix[src][dst] = sym;
}
//Adds phrase to matrix (e.g. "code" 'c' [0][1] 'o' [1][2] ...)
void nAdds(NFA nfa, char* str)
{
    for(int i = 0; i < strlen(str); i++)
    {
        nAdd(nfa, i, i + 1, str[i]);
    }
}
//INIT empty array
int* initArr(int size)
{
    int* arr = (int*) malloc(size * sizeof(int));

    for(int i = 0; i < size; i++)
    {
        arr[i] = EMPTY;
    }

    return arr;
}
//Frees NFA and its elements
void nFree(NFA nfa)
{
    for(int i=0; i < nfa->size; i++)
    {
        free(nfa->matrix[i]);
    }
    free(nfa->matrix);
    free(nfa->states);
    free(nfa);
}