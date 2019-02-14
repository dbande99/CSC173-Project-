#include <stdlib.h>
#include <limits.h>
#include "HashSet.h"
#include <stdio.h>
#include "dfa.h"
#define EMPTY INT_MIN

HashSet new_HashSet(int size)
{
    HashSet hash = (HashSet) malloc(sizeof(HashSet) + sizeof(int**));
    hash->index = 0;
    hash->size = size;
    hash->set = (int**) malloc(size * sizeof(int*));
    for(int i = 0; i < size; i++)
    {
        hash->set[i] = (int*) malloc(size * sizeof(int*));
    }
    return hash;
}

void addSubSet (HashSet hash, int* subset)
{
    for(int i = 0; i < hash->size; i++)
    {
        hash->set[hash->index][i] = subset[i];
    }
    hash->index++;
}

int* newSubSet(int size)
{
    int* subset = (int*) malloc(size * sizeof(int));
    for(int i = 0; i < size; i++)
    {
        subset[i] = EMPTY;
    }
    return subset;
}

void hFree(HashSet hash)
{
    for(int i = 0; i < hash->size; i++)
    {
        free(hash->set[i]);
    }
    free(hash->set);
    free(hash);
}
