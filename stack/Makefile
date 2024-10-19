CC=gcc
SRC := $(shell find . -name "*.c")
OBJ := $(SRC:.c=.o)


build: $(OBJ)
	mkdir -p bin
	gcc -o ./bin/main $(OBJ)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) build
