OBJS = source.o poly.o tri.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

lab5 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o lab6c

source.o : source.cpp poly.hpp tri.hpp
	$(CC) $(CFLAGS) source.cpp

poly.o : poly.hpp poly.cpp 
	$(CC) $(CFLAGS) poly.cpp

tri.o : tri.hpp tri.cpp 
	$(CC) $(CFLAGS) tri.cpp


#quad.o : quad.hpp quad.cpp 
#	$(CC) $(CFLAGS) quad.cpp


