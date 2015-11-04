OBJS = source.o point.o tri.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

p1 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o p1

source.o : source.cpp point.hpp tri.hpp
	$(CC) $(CFLAGS) source.cpp

point.o : point.hpp point.cpp
	$(CC) $(CFLAGS) point.cpp

tri.o : tri.hpp tri.cpp
	$(CC) $(CFLAGS) tri.cpp 