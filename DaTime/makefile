CC = g++
CFLAGS =  -ansi

all: datest nametest indytest apptest testcontainer

datest: datest.o datime.o time.o common.o
	$(CC) $(CFLAGS) -o datest datest.o datime.o time.o common.o

links: 
	ln -s ../Common/common.h
	ln -s ../Common/common.cc
clean:
	rm -f *.o

real_clean: clean
	rm -f datest
