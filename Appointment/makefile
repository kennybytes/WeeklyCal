CC = g++
CFLAGS =  -ansi

all: datest nametest indytest apptest testcontainer

apptest: apptest.o appointment.o datime.o time.o individual.o name.o common.o
	$(CC) -o apptest apptest.o appointment.o datime.o time.o individual.o name.o common.o

apptest.o: individual.h datime.h common.h name.h time.h

links: 
	ln -s ../Common/common.h
	ln -s ../Common/common.cc
	ln -s ../Individual/individual.h
	ln -s ../Individual/individual.cc
	ln -s ../Individual/name.h
	ln -s ../Individual/name.cc
	ln -s ../DaTime/time.h
	ln -s ../DaTime/time.cc
	ln -s ../DaTime/datime.h
	ln -s ../DaTime/datime.cc
	ln -s ../DaTime/day.h


dist:
	tar -cvf $(RELEASE_DIR)/$(RELEASE_FILE) 

clean:
	rm -f *.o

real_clean: clean
	rm -f datest
