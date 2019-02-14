CFLAGS = -g -Wall -Werror -std=c99

auto: main.o HashSet.o nfa.o dfa.o
	$(CC) main.o HashSet.o dfa.o nfa.o -o auto

main.o: main.c
	$(CC) -c main.c

dfa.o: dfa.c dfa.h
	$(CC) -c dfa.c

nfa.o: nfa.c nfa.h
	$(CC) -c nfa.c

HashSet.o: HashSet.c HashSet.h
	$(CC) -c HashSet.c
clean:
	rm main.o dfa.o nfa.o HashSet.o auto
