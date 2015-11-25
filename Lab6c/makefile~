OBJS = source.o poly.o tri.o quad.o point.o 
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

lab6c : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o lab6c

clean:
	@rm -f $(OBJS) lab6c

source.o : source.cpp poly.hpp tri.hpp quad.hpp point.hpp
	$(CC) $(CFLAGS) source.cpp

point.o : point.hpp poly.cpp 
	$(CC) $(CFLAGS) point.cpp


poly.o : poly.hpp poly.cpp point.hpp
	$(CC) $(CFLAGS) poly.cpp

tri.o : tri.hpp tri.cpp poly.hpp point.hpp
	$(CC) $(CFLAGS) tri.cpp

quad.o : quad.hpp quad.cpp poly.hpp point.hpp
	$(CC) $(CFLAGS) quad.cpp


