//
// Created by Evan on 2/5/2019.
//
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "nfa.h"
//MAKE NEW MATRIX ITS OWN HEADER FILE
#include "dfa.h"

NFA new_NFA(int nstates)
{
    //Allocate for DFA and matrix
    NFA n = (NFA) malloc(sizeof(NFA) + sizeof(int**) + sizeof(int*));

    n->size = nstates;
    n->current_state = malloc(nstates * sizeof(int));
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
    //For all current states
    for(int z = 0; z < n->size; z++)
    {
        //If intMax, means loop on self
        if (n->matrix[z][z] == INT_MAX)
        {
            continue;
        }

        for (int i = 0; i < n->size; i++)
        {
            //i represents next state
            //printf("%n %n %c %c \n", n->current_state, i, n->matrix.matrix[n->current_state][i], symb);
            if (sym == n->matrix[z][i])
            {
                n->current_state[z] = i;
                break;
            }
            //Did not find transition, reject state
            if (i == n->size - 1)
            {
                //printf("%n %c \n", n->current_state, symb);
                n->current_state[z] = INT_MIN;
            }
        }
    }
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
        if (n->current_state[i] + 1 == n->size) {
            return true;
        }
    }
    return false;
}