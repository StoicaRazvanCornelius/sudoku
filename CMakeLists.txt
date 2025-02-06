cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Sudoku)

# Set the common build directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add each subproject
add_subdirectory(sudoku_generator)
#add_subdirectory(sudoku_solver) 
#add_subdirectory(CommonLib)  # Shared library if applicable
