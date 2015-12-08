OBJS = source.o 
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

lab6c : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o lab6d

clean:
	@rm -f $(OBJS) lab6d

source.o : source.cpp intern.hpp employee.hpp paidemployee.hpp junior.hpp senior.hpp
	$(CC) $(CFLAGS) source.cpp



