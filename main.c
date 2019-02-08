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
    //Sets transition edges to "c" "s" ...
    //[0][1] = "c", [1][2] = "s" ...
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
    //Same as question 1
    for(int i = 0; i < 3; i++)
    {
        d->matrix.matrix[i][i+1] = lang[i];
    }
    //Loop on self once "cat" is seen at start
    d->matrix.matrix[3][3] = INT_MAX;
    return d;
}
DFA DFA_question3()
{
    DFA d = new_DFA(3);
    //Lowest even is two zeros 
    //Go back if another zero
    d->matrix.matrix[0][1] = '0';
    d->matrix.matrix[1][2] = '0';
    d->matrix.matrix[2][1] = '0';
    //Loop on ones
    d->matrix.matrix[0][0] = '1';
    d->matrix.matrix[1][1] = '1';
    d->matrix.matrix[2][2] = '1';

    return d;
}
DFA DFA_question4()
{

}
int main()
{
    /*
    char* test1 = "csc173";
    DFA d1 = DFA_question1();

    printf("%d\n",DFA_execute(d1,test1));

    char* test2 = "cat";
    DFA d2 = DFA_question2();

    printf("%d\n", DFA_execute(d2, test2));

    char* test3 = "00";
    DFA d3 = DFA_question3();
    
    printf("%d\n", DFA_execute(d3, test3));
    */
    
    return 0;
}

