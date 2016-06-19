OBJS = main.o
CC = g++
CPPFLAGS = -Wall -c -g -std=c++11
LFLAGS = -Wall -g

a: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o a

main.o: main.cpp
	$(CC) $(CPPFLAGS) main.cpp

clean: 
	rm -f *.o 
	rm -f a
