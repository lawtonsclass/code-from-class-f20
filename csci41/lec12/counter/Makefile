# compiles just main.cpp
main.o: main.cpp
	g++ -std=c++17 -c main.cpp

# compiles just counter.cpp
counter.o: counter.cpp
	g++ -std=c++17 -c counter.cpp

# links counter and main
# if only main.cpp changes, counter doesn't need to be recompiled
main: counter.o main.o
	g++ -std=c++17 counter.o main.o -o main

clean:
	rm -f *.o main
