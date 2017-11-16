CFLAGS   := -Wall -Wstrict-prototypes =g -formit-frame-pointer --ffreestanding
all : crt0.s  leds.crt0
	arm-linux-gcc $(CFLAGS) -c  -o ctr0.o  crt0.s
	arm-linux-gcc $(CFLAGS) -c  -o leds.o  leds.c
	arm-linux-ld -Tleds.lds crt0.o leds.o -o leds_elf
	arm-linux-objcopy -O binary -S leds_elf  leds.bin
	arm-linux-objdump -D -m arm leds_lef > leds.dis
clean:
	rm -f leds.dis leds.bin  leds_elf  *.o