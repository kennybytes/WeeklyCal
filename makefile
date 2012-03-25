CC = g++
CFLAGS =  -ansi

SUBDIRS = DaTime Individual

.PHONY: all
all:
	for dir in $(SUBDIRS); do \
	$(MAKE) -C $$dir;     \
	done


clean:
	rm -f *.o

real_clean: clean
	rm -f datest
