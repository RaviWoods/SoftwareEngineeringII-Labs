OBJS = source.o items.o books.o dvd.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

test : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o test13

clean:
	@rm -f $(OBJS) $(LABN)

source.o : source.cpp books.hpp dvd.hpp items.hpp
	$(CC) $(CFLAGS) source.cpp

books.o : books.cpp books.hpp items.hpp
	$(CC) $(CFLAGS) books.cpp
	
dvd.o : dvd.cpp dvd.hpp items.hpp
	$(CC) $(CFLAGS) dvd.cpp

items.o : items.cpp items.hpp
	$(CC) $(CFLAGS) items.cpp



