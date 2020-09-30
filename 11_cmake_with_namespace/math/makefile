# square - destination
# after : source
square: main_square.o square_utils.o
	g++ main_square.o square_utils.o -o math

main_square.o: main_square.cpp
	g++ -c main_square.cpp

square_utils.o: square_utils.cpp
	g++ -c square_utils.cpp

clean:
	rm *.o math