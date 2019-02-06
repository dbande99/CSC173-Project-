//
// Created by Evan on 1/29/2019.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "AdjMatrix.h"
#include "dfa.h"

#define REJECT -1

DFA new_DFA(int states)
{
    DFA dfa = (DFA) malloc(sizeof(DFA));
    dfa->size = states;
    dfa->current_state = 0;
    dfa->matrix = new_matrix(states);
    return dfa;
}

void DFA_free(DFA dfa)
{
    free_matrix(&(dfa->matrix));
    free(dfa);
}

int DFA_get_size(DFA dfa)
{
    return dfa->size;
}

int get_current_state(DFA dfa)
{
    return dfa->current_state;
}

void DFA_get_transition(DFA dfa, char symb)
{
    //If intMax, means loop on self
    if(dfa->matrix.matrix[dfa->current_state][dfa->current_state] == INT_MAX)
    {
        return;
    }
    for(int i = 0; i < dfa->size; i++)
    {
        //i represents next state
        printf("%d %d %c %c \n", dfa->current_state, i, dfa->matrix.matrix[dfa->current_state][i], symb);
        if(symb == dfa->matrix.matrix[dfa->current_state][i])
        {
            dfa->current_state = i;
            break;
        }
        //did not find transition
        else if(i == dfa->size - 1)
        {
            printf("%d %c \n", dfa->current_state, symb);
            dfa -> current_state = REJECT;
        }
    }

}

bool DFA_execute(DFA dfa, char *input)
{
    int length = strlen(input);
    for(int i = 0; i < length; i++)
    {
        if(dfa->current_state != REJECT)
        {
            DFA_get_transition(dfa, input[i]);
        }
        else
        {
            break;
        }

    }
    printf("%d", dfa->current_state);
    return (dfa->current_state+1) == dfa->size;
}