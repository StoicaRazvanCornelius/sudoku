#include <iostream>
#include "../include/main.hpp"

int main() {
    print_message();
    return 0;
}


void print_message() {
    std::cout << "This is a function from another file!" << std::endl;
}