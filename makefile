CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -Ientrada -Icalendario
TARGET = calendario.exe
SRC = main.c entrada/entrada.c calendario/calendario.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean