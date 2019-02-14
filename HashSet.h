#include <stdlib.h>
#ifndef CSC173_PROJECT_HASHSET_H
#define CSC173_PROJECT_HASHSET_H


typedef struct HashSet
{
    int size;
    int index;
    int** set;

} *HashSet;

extern HashSet new_HashSet(int size);

extern void addSubSet (HashSet hash, int* subset);

extern int* newSubSet(int size);

extern void hFree(HashSet hash);

#endif
