#
#
#	MakeFile for DaTime object
#

###	FLAGS	###
CC = g++
CFLAGS =  -ansi

all: datest

datest: datest.o datime.o time.o common.o
	$(CC) $(CFLAGS) -o datest datest.o datime.o time.o common.o

datest.o: datime.h time.h common.h

datime.o: datime.h time.h

time.o: time.h

links: 
	ln -s ../Common/common.h
	ln -s ../Common/common.cc
clean:
	rm -f *.o

real_clean: clean
	rm -f datest
