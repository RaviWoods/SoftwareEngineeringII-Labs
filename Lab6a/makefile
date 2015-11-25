OBJS = source.o stopwatch.o modulocounter.o counter.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

lab6a : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o lab6a

source.o : source.cpp stopwatch.hpp counter.hpp
	$(CC) $(CFLAGS) source.cpp

stopwatch.o : stopwatch.hpp stopwatch.cpp modulocounter.hpp
	$(CC) $(CFLAGS) stopwatch.cpp
	
modulocounter.o : modulocounter.hpp modulocounter.cpp
	$(CC) $(CFLAGS) modulocounter.cpp

counter.o : counter.hpp counter.cpp
	$(CC) $(CFLAGS) counter.cpp
