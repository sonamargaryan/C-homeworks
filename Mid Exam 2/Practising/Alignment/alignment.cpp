#include <iostream>

struct A {
    char c; //1 byte
    alignas (8) int x; 
};

/* 1 byte char, 2-7 bytes padding, 8-11 bytes int, 12-16 padding */

int main () {
    std::cout << "Size of our struct = " << sizeof (A) << " bytes\n"; //16 bytes
    
    return 0;
}
