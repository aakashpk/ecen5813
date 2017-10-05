CC=gcc
CSTD=c99
CFLAGS=-Wall\
	-std=$(CSTD)\
	-g\
	-Werror\
	-O0

include sources.mk
	
CPPFLAGS=-E
LDFLAGS=
PLATFORM=HOST

SIZETOOL=size
	
.PHONY:build clean compile-all

DS=VERBOSE
PS=

TOREMOVE=*.o\
	*.out\
	*.map\
	*.asm\
	*.i\
	*.d\
	*.dep\
	*.elf

ifeq ($(PLATFORM),BBB)
CC = arm-linux-gnueabihf-gcc
SIZETOOL=arm-linux-gnueabihf-size
else

ifeq ($(PLATFORM),KL25Z)
CC = arm-none-eabi-gcc
SIZETOOL=arm-none-eabi-size
DS=KL25Z
INCLUDES+=-I ../include/CMSIS\
	-I ../include/kl25z
LDFLAGS=-T ../platform/MKL25Z128xxx4_flash.ld\
	-march=armv6-m\
	-mthumb -mcpu=cortex-m0\
	-mfpu=fpv4-sp-d16\
	--specs=nosys.specs
SOURCES+=system_MKL25Z4.c\
	startup_MKL25Z4.s
endif
endif

TARGET=project1.elf

OBJECTS:=$(SOURCES:.c=.o)

build:$(OBJECTS)
	$(CC) $(OBJECTS) -I$(INCLUDES) $(CFLAGS) $(LDFLAGS) -o $(TARGET) -D$(DS) $(PS) -Xlinker -Map=project1.map
#	@echo "\n******Built" $(TARGET)"******\n"
	$(SIZETOOL) $(OBJECTS) $(TARGET)
#	./project1.elf

compile-all:$(OBJECTS)
	
%.d : %.c
	$(CC) -MM $< -MF $@ -I$(INCLUDES) $(CFLAGS) $(CPPFLAGS) -D$(DS) $(LDFLAGS) $(PS)

%.i : %.c
	$(CC) $(CPPFLAGS) $< -o $@ -I$(INCLUDES) $(CFLAGS) $(LDFLAGS) -D$(DS) $(PS)
	
%.asm : %.c
	$(CC) -S $< -o $@ -I$(INCLUDES) $(CFLAGS) $(LDFLAGS) -D$(DS) $(PS)

%.o : %.c
	$(CC) -MM $< -MF $*.dep -I $(INCLUDES) $(CFLAGS) $(PS)
	$(CC) -c $< -o $@ -I$(INCLUDES) $(CFLAGS) -D$(DS) $(LDFLAGS) $(PS)
#	@echo "\n******Built" $@"******"

clean:
	rm -f $(TOREMOVE)
