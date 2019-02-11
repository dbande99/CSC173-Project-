/*
 * File: dfa.h
 * Creator: George Ferguson
 * Created: Thu Sep  1 17:45:52 2016
 * Time-stamp: <Tue Aug  8 11:30:46 EDT 2017 ferguson>
 */
#include "nfa.h"
#ifndef _dfa_h
#define _dfa_h


/**
 * The data structure used to represent a deterministic finite automaton.
 * @see FOCS Section 10.2
 * Note that YOU must specify this data structure, although you can hide
 * (encapsulate) its implementation behind the declared API functions and
 * only provide a partial declaration in the header file.
 */
typedef struct DFA
{
    int size;
    int current_state;
    int** matrix;
} *DFA;

extern DFA NFAtoDFA(NFA n);


extern int** new_matrix(int states);
/**
 * Allocate and return a new DFA containing the given number of states.
 */
extern DFA new_DFA(int nstates);

/**
 * Free the given DFA.
 */
extern void dFree(DFA dfa);

/**
 * Return the number of states in the given DFA.
 */
extern int dSize(DFA dfa);

/**
 * Return the state specified by the given DFA's transition function from
 * state src on input symbol sym.
 */
extern void DFA_get_transition(DFA dfa, char sym);

/**
 * For the given DFA, set the transition from state src on input symbol
 * sym to be the state dst.
 */
extern void dAdd(DFA dfa, int src, int dst, int sym);

/**
 * Set the transitions of the given DFA for each symbol in the given str.
 * This is a nice shortcut when you have multiple labels on an edge between
 * two states.
 */
extern void dAdds(DFA dfa, char *str);

extern int dState(DFA dfa);

extern void dSetState(DFA dfa, int state);

extern int DFA_execute(DFA dfa, char *input);

extern int** copyOfMatrix(NFA n);


#endif

