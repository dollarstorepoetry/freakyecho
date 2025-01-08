# Compiler and flags
CC = gcc
CFLAGS = -g

# Source files
SRC = freakyecho.c

# Output binary
TARGET = /usr/bin/freakyecho

# Build the target
$(TARGET): $(SRC)
	sudo $(CC) $(CFLAGS) $(SRC) -o $(TARGET) 

# Clean build artifacts
clean:
	rm -f $(TARGET)
