CC=gcc
CSTD=c99
CFLAGS=-Wall\
	-std=$(CSTD)
CPPFLAGS=""
LDFLAGS=""
PLATFORM=HOST
INCLUDES=../include/common
SOURCES=main.o\
	debug.o\
	memory.o\
#	conversion.o
DEBUGSWITCH=VERBOSE
TOREMOVE=*.o\
	*.elf


build:$(SOURCES)
	$(CC) $(SOURCES) -I$(INCLUDES) $(CFLAGS) -o Project1.elf
	\./Project1.elf

compile-all:$(SOURCES)
	$(CC) -c sources.c -I$(INCLUDES)

main.o : main.c
	$(CC) -c main.c -I $(INCLUDES) $(CFLAGS) -D$(DEBUGSWITCH) 
	
debug.o : debug.c
	$(CC) -c debug.c -I $(INCLUDES) $(CFLAGS) -D$(DEBUGSWITCH)

memory.o:memory.c
	$(CC) -c memory.c -I $(INCLUDES) $(CFLAGS)

conversion.o:conversion.c
	$(CC) -c conversion.c -I $(INCLUDES) $(CFLAGS)

clean:
	rm $(TOREMOVE)
