#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include "dfa.h"
#include "AdjMatrix.h"

DFA DFA_question1()
{
    DFA d = new_DFA(7);
    char* lang = "csc173";
    for(int i =0; i<6; i++)
    {
        d->matrix.matrix[i][i+1] = lang[i];
    }
    return d;
}
DFA DFA_question2()
{
    DFA d = new_DFA(4);
    char* lang = "cat";
    for(int i = 0; i < 3; i++)
    {
        d->matrix.matrix[i][i+1] = lang[i];
    }
    //loop on self once reaches "cat"
    d->matrix.matrix[3][3] = INT_MAX;
    return d;
}
DFA DFA_question3()
{
    DFA d = new_DFA(3);
   // AdjMatrix a = new_matrix(3);
    d->matrix.matrix[0][1] = '0';
    d->matrix.matrix[1][2] = '0';
    d->matrix.matrix[2][1] = '0';

    d->matrix.matrix[0][0] = '1';
    d->matrix.matrix[1][1] = '1';
    d->matrix.matrix[2][2] = '1';

    //free a eventually
    return d;
}
int main()
{
    /*char* test = "csc173";
    DFA d = DFA_question1();

    printf("%d",DFA_execute(d,test));

    char* test2 = "cat";
    DFA d1 = DFA_question2();

    printf("\n%d", DFA_execute(d1, test2));*/

    DFA d2 = DFA_question2();
    char* test2 = "1010001";
    printf("\n%d", DFA_execute(d2, test2));
    return 0;
}

