CC=gcc
CSTD=c99
CFLAGS=-Wall\
	-std=$(CSTD)
CPPFLAGS=""
LDFLAGS=""
PLATFORM=HOST
INCLUDES=../include/common
SOURCES=main.c\
	debug.c\
	memory.c\
	conversion.c
	
OBJECTS:=$(SOURCES:.c=.o)

.PHONY:build
.PHONY:clean
.PHONY:compile-all

DEBUGSWITCH=VERBOSE
TOREMOVE=*.o\
	*.out\
	*.map\
	*.asm\
	*.i\
	*.d\
	*.elf

ifeq ($(PLATFORM),BBB)
CC = arm-linux-gnueabihf-gcc
else
ifeq ($(PLATFORM),KL25Z)
CC = arm-none-eabi-gcc
DEBUGSWITCH = NONE
endif
endif
	
build:$(OBJECTS)
	$(CC) $(OBJECTS) -I$(INCLUDES) $(CFLAGS) -o project1.elf
	./project1.elf

compile-all:$(OBJECTS)
	
%.d : %.c
	$(CC) -MM $< -MF $@ -I$(INCLUDES) $(CFLAGS) 

%.i : %.c
	$(CC) -E $< -o $@ -I$(INCLUDES) $(CFLAGS)	
	
%.asm : %.c
	$(CC) -S $< -o $@ -I$(INCLUDES) $(CFLAGS)	

%.o : %.c
#	$(CC) -MM $< -MF $*.d -I $(INCLUDES) $(CFLAGS)
	$(CC) -c $< -o $@ -I$(INCLUDES) $(CFLAGS) -D$(DEBUGSWITCH) 
	
clean:
	rm -f $(TOREMOVE)
