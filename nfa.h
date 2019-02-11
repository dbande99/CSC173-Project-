/*
 * File: nfa.h
 * Creator: George Ferguson
 * Created: Thu Sep  1 17:54:41 2016
 * Time-stamp: <Tue Aug  8 11:45:49 EDT 2017 ferguson>
 */

#ifndef _nfa_h
#define _nfa_h

/**
 * The data structure used to represent a nondeterministic finite automaton.
 * @see FOCS Section 10.3
 * @see Comments for DFA in dfa.h
 */
typedef struct NFA
{
    int size;
    int* states;
    int** matrix;
} *NFA;

/**
 * Allocate and return a new NFA containing the given number of states.
 */
extern NFA new_NFA(int nstates);

/**
 * Free the given NFA.
 */
extern void nFree(NFA nfa);

/**
 * Return the number of states in the given NFA.
 */
extern int nSize(NFA nfa);

/**
 * Return the set of next states specified by the given NFA's transition
 * function from the given state on input symbol sym.
 */
extern void nTrans(NFA nfa, char sym);

/**
 * For the given NFA, add the state dst to the set of next states from
 * state src on input symbol sym.
 */
extern void nAdd(NFA nfa, int src, int dst, int sym);

/**
 * Run the given NFA on the given input string, and return true if it accepts
 * the input, otherwise false.
 */
extern int NFA_execute(NFA nfa, char *input);


extern void nAdds(NFA nfa, char* str);


extern int* initArr(int size);

#endif
