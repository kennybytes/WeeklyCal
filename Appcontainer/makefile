CC = g++
CFLAGS =  -ansi

all: datest nametest indytest apptest testcontainer


apptest: apptest.o appointment.o datime.o time.o individual.o name.o common.o
	$(CC) -o apptest apptest.o appointment.o datime.o time.o individual.o name.o common.o



dist:
	tar -cvf $(RELEASE_DIR)/$(RELEASE_FILE) 

clean:
	rm -f *.o

real_clean: clean
	rm -f datest
