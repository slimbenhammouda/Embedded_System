# @copyrigth : Ing Slim benhammouda
CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ= $(As:.s=.o)
project_name=learn
all:$(project_name).bin
	@echo "===>build is done<==="
%.o:%.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
startup.o:startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@
$(project_name).elf:$(AsOBJ) $(OBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(AsOBJ) $(OBJ) -o $@
$(project_name).bin:$(project_name).elf
	$(CC)objcopy.exe -O binary $< $@
clean_all:
	rm *.o *.bin *.elf
clean:
	rm *.elf *.bin