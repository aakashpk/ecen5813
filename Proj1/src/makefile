CC=gcc
CSTD=c99
CFLAGS=-Wall\
	-std=$(CSTD)
CPPFLAGS=""
LDFLAGS=""
PLATFORM=HOST
INCLUDES=../include/common
SOURCES=debug.c\
	memory.c\
#	conversion.c
DEBUGSWITCH=VERBOSE
TOREMOVE=*.o\
#	*.elf


all:
	$(CC) sources.c $(SOURCES) -I$(INCLUDES) $(CFLAGS) -o sources.o -D$(DEBUGSWITCH)
	\./sources.o

clean:
	rm $(TOREMOVE)
