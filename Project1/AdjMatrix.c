//
// Created by Evan on 2/5/2019.
//

#include "AdjMatrix.h"
#include <stdlib.h>
#include <limits.h>

AdjMatrix new_matrix(int states)
{
    int** matrix = (int**) malloc(states * sizeof(int**));
    for(int i =0; i < states; i++)
    {
        matrix[i] = (int*) malloc(states * sizeof(int));

        for(int j = 0; j < states; j++)
        {
            matrix[i][j] = INT_MIN;
        }
    }
    AdjMatrix a;
    a.matrix = matrix;
    a.size = states;
    return a;
}

void free_matrix(AdjMatrix* adj)
{
    for(int i=0; i < adj->size; i++) {
        free(adj->matrix[i]);
    }
    free(adj);
}

