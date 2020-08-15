# number signs are comments in the Makefile language
CC=g++
CFLAGS=-std=c++17

# because main is the first rule, "make" is equivalent to "make main"

# I want a thing called main. I need
main: counter.o main.o
	# when I hit the "body" of the rule (remember the tab!)
	# now I can use my reqs to make main
	g++ -std=c++17 counter.o main.o -o main

# equivalent to main (but called main2)
main2: counter.o main.o
	$(CC) $(CFLAGS) $^ -o $@

# if main.o doesn't currently exist or has changed, run this rule to
# make/recompile it
main.o: main.cpp
	g++ -std=c++17 -c main.cpp

counter.o: counter.cpp
	g++ -std=c++17 -c counter.cpp

# a special rule to get rid of all the compiled code
clean:
	rm -f main.o counter.o main main2
