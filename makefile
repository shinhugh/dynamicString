# Compiler
CC = gcc
# Compiler flags
CFLAGS = -I .
# Global dependencies
DEPS = dynamicString.h
# Object files to make
OBJ = dynamicString.o
# Libraries to make
LIB = libdynamicString.a

all: libdynamicString.a

# Make object files
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Make static library dynamicString
libdynamicString.a: $(OBJ)
	ar rcs $@ $^

# Make test program
test: test.c libdynamicString.a $(DEPS)
	$(CC) -o $@ $< $(CFLAGS) -L . -l dynamicString

.PHONY: clean

# Remove all but source code
clean:
	rm -f $(OBJ) $(LIB) test test.o
