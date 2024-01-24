# Makefile for 'school' executable

# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Source files
SRCS = main.c file1.c file2.c  # Add your source files here

# Object files
OBJS = $(SRCS:.c=.o)

# Target executable
TARGET = school

# Rule to build the executable
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Rule to build object files from source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove generated files
clean:
	rm -f $(OBJS) $(TARGET)
