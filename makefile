output: main.o condictions.o
	g++ main.o condictions.0 -o output

main.o: main.cpp
	g++ -c main.cpp

condictions.o: condictions.cpp functions.h
	g++ -condictions.cpp

clean:
	rm *.o output
