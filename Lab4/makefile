OBJS = source.o point.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

lab3 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o lab3

source.o : source.cpp point.hpp
	$(CC) $(CFLAGS) source.cpp

point.o : point.hpp point.cpp
	$(CC) $(CFLAGS) point.cpp
