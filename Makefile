CC=gcc
RM=rm -f

INCLUDE = -I/cygdrive/c/MinGW/include
CFLAGS += -Wall -O2 $(INCLUDE)

TARGET = tjtag

SRC = tjtag.c

all: $(TARGET)

tjtag: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o bin/$@

clean:
	$(RM) $(SRC:.c=.o) bin/{$(TARGET),$(TARGET).exe}
