CC=gcc
TARGET=mmath
CFLAGS=-std=c89 -march=native

OBJ_FILES=test.o mmath.o

.PHONY: clean

$(TARGET): test.o mmath.a
	$(CC) -o $@ $^ $(CFLAGS)

test.o: test.c
	$(CC) -c $< -o $@ $(CFLAGS)

mmath.a: $(OBJ_FILES)
	ar rcs $@ $^

clean:
	rm -rf $(TARGET) $(OBJ_FILES) *.a
