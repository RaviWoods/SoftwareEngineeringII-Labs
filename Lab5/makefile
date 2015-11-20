OBJS = source.o stopwatch.o counter.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

lab5 : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o lab5



source.o : source.cpp stopwatch.hpp counter.hpp
	$(CC) $(CFLAGS) source.cpp

stopwatch.o : stopwatch.hpp stopwatch.cpp counter.hpp
	$(CC) $(CFLAGS) stopwatch.cpp

counter.o : counter.hpp counter.cpp
	$(CC) $(CFLAGS) counter.cpp
