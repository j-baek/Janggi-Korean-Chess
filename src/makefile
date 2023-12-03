# Makefile for a janggi project

# Compiler
CC := g++

# Compiler flags
CFLAGS := -std=c++11

# Source files
SRCS := main.cpp janggi_piece.cpp janggi_board.cpp

# Executable name
TARGET := main

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

# Clean rule
clean:
	rm -f $(TARGET)
