#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Clean up the temporary object files
rm *.o

echo "Static library called liball.a from all the .c files that are in the current directory was created successfully."
