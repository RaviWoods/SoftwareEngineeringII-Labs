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

source.o : source.cpp ../libs.h
	$(CC) $(CFLAGS) source.cpp



