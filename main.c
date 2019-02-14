#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include "dfa.h"
#include "nfa.h"
#define LOOP INT_MAX
#define EMPTY INT_MIN
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
/*Tests if a .. e .. i .. o .. u in string
  Credit to textbook for idea
 */
DFA DFA_question5()
{
    DFA dfa = new_DFA(6);
    dAdds(dfa, "aeiou");
    dAdd(dfa, 0, 0, 'a' * -1);
    dAdd(dfa, 1, 1, 'e' * -1);
    dAdd(dfa, 2, 2, 'i' * -1);
    dAdd(dfa, 3, 3, 'o' * -1);
    dAdd(dfa, 4, 4, 'u' * -1);
    dAdd(dfa, 5, 5, LOOP);
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
NFA NFA_question3()
{
    NFA nfa = new_NFA(12);

    nAdd(nfa, 0, 0, LOOP);
    nAdd(nfa, 11, 11, LOOP);

    char* str = "aghiostw";
    for(int i = 1; i < 9; i++)
    {
        nAdd(nfa, 0, i, str[i-1]);
        nAdd(nfa, i, 11, str[i-1]);
        nAdd(nfa, i, i, LOOP);
    }
    nAdd(nfa, 0, 9, 'n');

    nAdd(nfa, 9, 9, LOOP);
    nAdd(nfa, 9, 10, 'n');


    nAdd(nfa, 10, 10, LOOP);
    nAdd(nfa, 10, 11, 'n');

    return nfa;
}
/*
 *LANGUAGE IS ANY STRING WITH
  TWO/MORE OF SAME CONTINUOUS VOWELS
  e.g. scoot, loop, parakeet, deep
  */
NFA NFA_question4()
{
    NFA nfa = new_NFA(7);
    char* str = "aeiou";
    nAdd(nfa, 0, 0, LOOP);
    nAdd(nfa, 6, 6, LOOP);
    for(int i = 1; i < 5; i++)
    {
        nAdd(nfa, 0, i, str[i - 1]);
        nAdd(nfa, i, 6, str[i - 1]);
    }
    return nfa;
}
int strEq(char* a, char* b)
{
    for(int i = 0; i < strlen(b); i++)
    {
        if(a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}
char* removeNewLine(char* str)
{
    int i = 0;

    while(i < 255)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }

    return str;
}
void runDAuto(DFA dfa, int question)
{
    question--;
    char* q1 = "Testing DFA that recognizes exactly 'csc173'";
    char* q2 = "Testing DFA that recognizes strings starting with 'cat'";
    char* q3 = "Testing DFA that recognizes an even numbers of 0's";
    char* q4 = "Testing DFA that recognizes an even number of 0's and 1's";
    char* q5 = "Testing DFA that recognizes any string with .a.e.i.o.u.";
    char* q6 = "Testing NFA to DFA that recognizes strings ending in 'code'";
    char* q7 = "Testing NFA to DFA that recognizes strings containing 'code'";

    const char* out[] = {q1,q2,q3,q4,q5,q6,q7};

    char* askIn = "Enter an input ('quit' to quit): ";
    char* input = malloc(255 * sizeof(char));

    char* result = "abcde";
    printf("%s\n", out[question]);
    do {
        printf("%s", askIn);
        fgets(input, 255, stdin);

        input = removeNewLine(input);

        result = DFA_execute(dfa,input) ? "true":"false";

        if(!strEq(input, "quit"))
        {
            printf("Input: %s\n", input);
            printf("Result for input '%s': %s\n", input, result);
        }
    } while(!strEq(input, "quit"));
    printf("\n\n");
    free(input);
}
void runNAuto(NFA nfa, int question)
{
    question--;
    char* q1 = "Testing NFA to DFA that recognizes strings ending in 'code'";
    char* q2 = "Testing NFA to DFA that recognizes strings containing 'code'";
    char* q3 = "Testing NFA that recognizes strings that are not partial anagrams of 'washington'";
    char* q4 = "Testing NFA that recognizes two/more of the same consecutive vowels";
    const char* out[] = {q1,q2,q3,q4};

    char* askIn = "Enter an input ('quit' to quit): ";
    char* input = malloc(255 * sizeof(char));

    char* result = "abcde";
    printf("%s\n", out[question]);
    do {
        printf("%s", askIn);
        fgets(input, 255, stdin);

        input = removeNewLine(input);

        result = NFA_execute(nfa,input) ? "true":"false";

        if(!strEq(input, "quit"))
        {
            printf("Input: %s\n", input);
            printf("Result for input '%s': %s\n", input, result);
        }
    } while(!strEq(input, "quit"));

    printf("\n\n");
    free(input);
}

int main()
{
    DFA d1 = DFA_question1();
    runDAuto(d1, 1);
    DFA d2 = DFA_question2();
    runDAuto(d2, 2);
    DFA d3 = DFA_question3();
    runDAuto(d3, 3);
    DFA d4 = DFA_question4();
    runDAuto(d4, 4);
    DFA d5 = DFA_question5();
    runDAuto(d5, 5);

    NFA n1 = NFA_question1();
    runNAuto(n1,1);
    NFA n2 = NFA_question2();
    runNAuto(n2,2);
    NFA n3 = NFA_question3();
    runNAuto(n3,3);
    NFA n4 = NFA_question4();
    runNAuto(n4,4);

    DFA d6 = NFAtoDFA(n1);
    runDAuto(d6,6);
    DFA d7 = NFAtoDFA(n2);
    runDAuto(d7,7);

    dFree(d1);
    dFree(d2);
    dFree(d3);
    dFree(d4);
    dFree(d5);
    dFree(d6);
    dFree(d7);

    nFree(n1);
    nFree(n2);
    nFree(n3);
    nFree(n4);

    return 1;
}

