CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic
TARGET = calendario.exe
SRC = main.c entrada.c calendario.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean