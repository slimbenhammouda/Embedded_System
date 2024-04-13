#@copyright : Slim Benhammouda
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -mthumb -gdwarf-2 -g
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
PROJECT_NAME=CORTEX_M4

all: $(PROJECT_NAME).bin	
	@echo "==========Build is Done========="

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS)  $(INCS)  $<	-o $@

$(PROJECT_NAME).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o	$@ -Map=Map_file.map
	CP $(PROJECT_NAME).elf $(PROJECT_NAME).axf
$(PROJECT_NAME).bin: $(PROJECT_NAME).elf 
	$(CC)objcopy.exe -O binary $<	$@


clean_all:
	rm *.elf *.bin *.o


clean:
	rm *.elf *.bin