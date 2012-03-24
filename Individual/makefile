CC = g++
CFLAGS =  -ansi

all: datest nametest indytest apptest testcontainer

nametest: nametest.o name.o
	$(CC) $(CFLAGS) -o nametest nametest.o name.o

indytest: indytest.o individual.o name.o common.o
	$(CC) -o indytest indytest.o individual.o name.o common.o

name.o: name.h
individual.o: individual.h name.h common.h

links:
	ln -s ../Common/common.cc
	ln -s ../Common/common.h

clean:
	rm -f *.o

real_clean: clean
	rm -f datest
