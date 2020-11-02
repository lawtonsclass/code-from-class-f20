# to make searching, we require searching.o and main.o
searching: searching.o main.o
	# once you have all the requirements, run g++ to link
	g++ -std=c++17 searching.o main.o -o searching

# to make searching.o, we require searching.cpp
searching.o: searching.cpp
	# use g++ -c to make the obj file
	g++ -std=c++17 -c searching.cpp

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

clean:
	# remove compiled files
	rm *.o searching
