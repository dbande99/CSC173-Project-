//
// Created by Evan on 2/5/2019.
//

#ifndef PROJECT1_ADJMATRIX_H
#define PROJECT1_ADJMATRIX_H
typedef struct AdjMatrix {
    int** matrix;
    int size;
} AdjMatrix;

AdjMatrix new_matrix(int states);

void free_matrix(AdjMatrix* adj);

#endif //PROJECT1_ADJMATRIX_H
