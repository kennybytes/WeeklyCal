
CCC = g++
CCFLAGS = -ansi

all: testcontainer

testcontainer: container.o common.o testcontainer.o
	$(CCC) -o testcontainer container.o common.o testcontainer.o

testcontainer.o: container.h
container.o: listnode.h  common.h entry.h



clean:
	rm -f *.o

real_clean: clean
	rm -f testcontainer
