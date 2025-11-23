# Define the name of the final executable file
TARGET = main

# Define the source files (you can add more .c files here)
SRC = main.c

# Use pkg-config to automatically get the necessary compiler flags and libraries for raylib
# CFLAGS are for the compiler (includes), LDFLAGS and LIBS are for the linker (libraries)
CFLAGS = -Wall $(shell pkg-config --cflags raylib)
LIBS = $(shell pkg-config --libs raylib)

# The default target (what happens when you just type 'make')
all: $(TARGET)

# Rule to link the final executable
$(TARGET): $(SRC)
	# The $< represents the first prerequisite (main.c)
	# The $@ represents the target (my_raylib_game)
	# The ^ represents all prerequisites
	gcc $(CFLAGS) $< -o $@ $(LIBS)

# Rule to clean up generated files (type 'make clean')
clean:
	rm -f $(TARGET) *.o

.PHONY: all clean
