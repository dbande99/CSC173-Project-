//
// Created by Evan on 1/29/2019.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "dfa.h"

#define REJECT -1

int** new_matrix(int states)
{
    int** matrix = (int**) malloc(states * sizeof(int*));

    for(int i = 0; i < states; i++)
    {
        matrix[i] = (int*) malloc(states * sizeof(int));

        for(int j = 0; j < states; j++)
        {
            matrix[i][j] = INT_MIN;
        }
    }
    return matrix;
}


DFA new_DFA(int states)
{
    //Allocate for DFA and matrix
    DFA d = (DFA) malloc(sizeof(DFA) + sizeof(int**));

    d->size = states;
    d->current_state = 0;
    d->matrix = new_matrix(states);

    return d;
}

void DFA_free(DFA d)
{
    for(int i=0; i < d->size; i++) {
        free(d->matrix[i]);
    }
    free(d->matrix);
    free(d);
}


void DFA_get_transition(DFA d, char sym)
{
    //If intMax, means loop on self
    if(d->matrix[d->current_state][d->current_state] == INT_MAX)
    {
        return;
    }
    for(int i = 0; i < d->size; i++)
    {
        //i represents next state
        //printf("%d %d %c %c \n", d->current_state, i, d->matrix.matrix[d->current_state][i], symb);
        if(sym == d->matrix[d->current_state][i])
        {
            d->current_state = i;
            break;
        }
        //did not find transition
        else if(i == d->size - 1)
        {
            //printf("%d %c \n", d->current_state, symb);
            d -> current_state = REJECT;
        }
    }

}

bool DFA_execute(DFA d, char *input)
{
    int length = strlen(input);
    for(int i = 0; i < length; i++)
    {
        if(d->current_state != REJECT)
        {
            DFA_get_transition(d, input[i]);
        }
        else
        {
            break;
        }

    }
    //printf("%d", d->current_state);
    return (d->current_state+1) == d->size;
}
