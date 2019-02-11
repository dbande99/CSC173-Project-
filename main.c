#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include "dfa.h"
#include "nfa.h"

/* IMPLEMENT OTHER FUNCTIONS IN DFA.H AND NFA.H
 *
 */
DFA DFA_question1()
{
    DFA d = new_DFA(7);
    char* lang = "csc173";
    //Sets transition edges to "c" "s" ...
    //[0][1] = "c", [1][2] = "s" ...
    for(int i =0; i<6; i++)
    {
        d->matrix[i][i+1] = lang[i];
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
        d->matrix[i][i+1] = lang[i];
    }
    //Loop on self once "cat" is seen at start
    d->matrix[3][3] = INT_MAX;
    return d;
}
DFA DFA_question3()
{
    DFA d = new_DFA(3);
    //Lowest even is two zeros 
    //Go back if another zero
    d->matrix[0][1] = '0';
    d->matrix[1][2] = '0';
    d->matrix[2][1] = '0';
    //Loop on ones
    d->matrix[0][0] = '1';
    d->matrix[1][1] = '1';
    d->matrix[2][2] = '1';

    return d;
}
NFA NFA_question1()
{
    NFA n = new_NFA(5);
    //Loop back
    n->matrix[0][0] = INT_MAX;

    //General input
    n->matrix[0][1] = 'c';
    n->matrix[1][2] = 'o';
    n->matrix[2][3] = 'd';
    n->matrix[3][4] = 'e';
    return n;
}
NFA NFA_question2()
{
    NFA n = new_NFA(5);
    //Loop back
    n->matrix[0][0] = INT_MAX;
    n->matrix[4][4] = INT_MAX;

    //General input
    n->matrix[0][1] = 'c';
    n->matrix[1][2] = 'o';
    n->matrix[2][3] = 'd';
    n->matrix[3][4] = 'e';



    return n;
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

    char* test3 = "001100111";
    DFA d3 = DFA_question3();

    printf("%d\n", DFA_execute(d3, test3));

    DFA_free(d1);
    DFA_free(d2);
    DFA_free(d3);*/

    char* test4 = "acode";

    NFA n1 = NFA_question1();

    printf("%d\n", NFA_execute(n1, test4));



    //printf("%d\n", DFA_execute(DFAtoNFA(n1), test4));
    char* test5 = "ade";

    NFA n2 = NFA_question2();
    printf("%d\n", NFA_execute(n2, test5));
   // printf("%d\n", DFA_execute(DFAtoNFA(n2), test5));*/
    return 1;


}

