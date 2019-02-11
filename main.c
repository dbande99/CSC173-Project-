#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include "dfa.h"
#include "nfa.h"
#define LOOP INT_MAX
#define EMPTY INT_MIN
/* IMPLEMENT OTHER FUNCTIONS IN DFA.H AND NFA.H
 *
 */
DFA DFA_question1()
{
    DFA dfa = new_DFA(7);
    dAdds(dfa, "csc173");
    return dfa;
}

DFA DFA_question2()
{
    DFA dfa = new_DFA(4);
    dAdds(dfa, "cat");
    //Loop on self once "cat" is seen at start
    dAdd(dfa, 3, 3, LOOP);
    return dfa;
}
DFA DFA_question3()
{
    DFA dfa = new_DFA(3);
    //Lowest even is two zeros
    dAdds(dfa, "00");
    //Go back if another zero
    dAdd(dfa, 2, 1, '0');
    //Loop on ones
    dAdd(dfa, 0, 0, '1');
    dAdd(dfa, 1, 1, '1');
    dAdd(dfa, 2, 2, '1');

    return dfa;
}
DFA DFA_question4()
{
    DFA dfa = new_DFA(9);
    //All 0 transitions
    dAdd(dfa, 0, 1, '0');
    dAdd(dfa, 1, 3, '0');
    dAdd(dfa, 2, 5, '0');
    dAdd(dfa, 3, 1, '0');
    dAdd(dfa, 4, 6, '0');
    dAdd(dfa, 5, 7, '0');
    dAdd(dfa, 6, 8, '0');
    dAdd(dfa, 7, 5, '0');
    dAdd(dfa, 8, 6, '0');
    //All 1 transitions
    dAdd(dfa, 0, 2, '1');
    dAdd(dfa, 1, 5, '1');
    dAdd(dfa, 2, 4, '1');
    dAdd(dfa, 3, 7, '1');
    dAdd(dfa, 4, 2, '1');
    dAdd(dfa, 5, 6, '1');
    dAdd(dfa, 6, 5, '1');
    dAdd(dfa, 7, 8, '1');
    dAdd(dfa, 8, 7, '1');

    return dfa;
}
NFA NFA_question1()
{
    NFA nfa = new_NFA(5);
    nAdd(nfa, 0, 0, LOOP);
    nAdds(nfa, "code");

    return nfa;
}
NFA NFA_question2()
{
    NFA nfa = new_NFA(5);
    //Loop back
    nAdd(nfa, 0, 0, LOOP);
    nAdd(nfa, 4, 4, LOOP);
    //General input
    nAdds(nfa, "code");
    return nfa;
}
int main()
{
    /*char* test1 = "csc173";
    DFA d1 = DFA_question1();

    printf("%d\n",DFA_execute(d1,test1));

    char* test2 = "cat";
    DFA d2 = DFA_question2();

    printf("%d\n", DFA_execute(d2, test2));

    char* test3 = "001101";
    DFA d3 = DFA_question3();

    printf("%d\n", DFA_execute(d3, test3));*/

    char* test10 = "1010";
    DFA d10 = DFA_question4();

    printf("Tester %d\n", DFA_execute(d10, test10));

    /*DFA_free(d1);
    DFA_free(d2);
    DFA_free(d3);
    DFA_free(d10);

    char* test4 = "codeaa";
    NFA n1 = NFA_question1();
    printf("%d\n", NFA_execute(n1, test4));

    //printf("%d\n", DFA_execute(DFAtoNFA(n1), test4));

    char* test5 = "codea";
    NFA n2 = NFA_question2();
    printf("%d\n", NFA_execute(n2, test5));

    //printf("%d\n", DFA_execute(DFAtoNFA(n2), test5));

    nFree(n1);
    nFree(n2);*/

    return 0;
}

