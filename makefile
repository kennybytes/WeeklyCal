CC = g++
CFLAGS =  -ansi

all: datest nametest indytest apptest testcontainer

datest: driver2.o datime.o time.o common.o
	$(CC) $(CFLAGS) -o datest driver2.o datime.o time.o common.o

nametest: nametest.o name.o
	$(CC) $(CFLAGS) -o nametest nametest.o name.o

indytest: indytest.o individual.o name.o common.o
	$(CC) -o indytest indytest.o individual.o name.o common.o

testcontainer: testcontainer.o container.o appcontainer.o appointment.o individual.o name.o datime.o time.o common.o  containerutil.o
	$(CC) -o testcontainer testcontainer.o appcontainer.o container.o appointment.o individual.o name.o datime.o time.o common.o  containerutil.o

apptest: apptest.o appointment.o datime.o time.o individual.o name.o common.o
	$(CC) -o apptest apptest.o appointment.o datime.o time.o individual.o name.o common.o

containertest:containertest.o appcontainer.o appointment.o individual.o name.o datime.o time.o common.o 
	$(CC) -o containertest containertest.o appcontainer.o appointment.o individual.o name.o datime.o time.o common.o

weeklycal: weeklycal.o appcontainer.o container.o appointment.o individual.o name.o datime.o time.o common.o containerutil.o 
	$(CC) -o weeklycal weeklycal.o appcontainer.o container.o appointment.o individual.o name.o datime.o time.o common.o  containerutil.o

containertest.o: appcontainer.h appointment.h entry.h

nametest.o: name.h

indytest.o: individual.h

individual.o: name.h 

container.o: container.h entry.h common.h

apptest.o: individual.h datime.h

driver2.o: datime.h time.h individual.h

datime.o: datime.h common.h time.h

time.o: time.h common.h

dist:
	tar -cvf $(RELEASE_DIR)/$(RELEASE_FILE) 

clean:
	rm -f *.o

real_clean: clean
	rm -f datest
