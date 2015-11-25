OBJS = source.o
LABN = lab7a
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

lab : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(LABN)

clean:
	@rm -f $(OBJS) $(LABN)

source.o : source.cpp myswap.hpp
	$(CC) $(CFLAGS) source.cpp



