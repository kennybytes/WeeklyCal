CC = g++
CFLAGS =  -ansi

all: nametest indytest 

#### 	Make Name Object	######
nametest: nametest.o name.o
	$(CC) $(CFLAGS) -o nametest nametest.o name.o
nametest.o: name.h 
name.o: name.h

####	Make Individual Object Test	#####
indytest: indytest.o individual.o name.o common.o
	$(CC) -o indytest indytest.o individual.o name.o common.o
indytest.o: individual.h name.h
individual.o: individual.h name.h common.h

links:
	ln -s ../Common/common.cc
	ln -s ../Common/common.h

clean:
	rm -f *.o

real_clean: clean
	rm -f datest
