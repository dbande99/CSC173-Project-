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
    //Allocate for DFA and matrix
    NFA n = (NFA) malloc(sizeof(NFA) + sizeof(int**) + sizeof(int*));

    n->size = nstates;
    n->current_state = malloc(nstates * sizeof(int));
    n->current_state[0] = 0;
    for(int i = 1; i < nstates; i++)
    {
        n->current_state[i] = EMPTY;
    }
    n->matrix = new_matrix(nstates);

    return n;
}

void NFA_free(NFA n)
{
    for(int i=0; i < n->size; i++)
    {
        free(n->matrix[i]);
    }
    free(n->matrix);
    free(n->current_state);
    free(n);
}

void NFA_get_transitions(NFA n, char sym)
{
    int* newstates = (int*) malloc(n->size * sizeof(int));
    for(int i = 0; i < n->size; i++)
    {
        newstates[i] = EMPTY;
    }
    int transition = 0;
    //For all states
    for(int s = 0; s < n->size; s++)
    {
        //If intMax, means loop on self
        /*if (n->matrix[z][z] == LOOP)
        {
            continue;
        }*/

        if(n->current_state[s] != EMPTY)
        {
            //For all transitions
            for (int t = 0; t < n->size; t++)
            {
                //i represents next state
                if (n->matrix[s][t] == sym)
                {
                    newstates[t] = t;
                    transition++;
                }
                if(n->matrix[s][t] == LOOP)
                {
                    newstates[s] = s;
                    transition++;
                }

                //Did not find transition, reject state
                if (!transition && t == n->size - 1)
                {
                    //printf("%n %c \n", n->current_state, symb);
                    newstates[s] = EMPTY;
                }
            }
        }
        transition = 0;
    }

    for(int i = 0; i < n->size; i++)
    {
        n->current_state[i] = newstates[i];
    }
    free(newstates);
}

bool NFA_execute(NFA n, char *input)
{
    int length = strlen(input);

    for(int i = 0; i < length; i++)
    {
        NFA_get_transitions(n, input[i]);
    }

    //printf("%d", d->current_state);

    //If any state is accepting, return true else false

    for(int i = 0; i < n->size; i++) {
        //printf("State %d %d\n", i, n->current_state[i]);
        if (n->current_state[i] + 1 == n->size) {
            return true;
        }
    }
    return false;
}