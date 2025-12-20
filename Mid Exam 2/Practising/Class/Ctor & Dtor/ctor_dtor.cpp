#include <iostream>

class A {
    public:
        A () {
            std::cout << "Hello from Constructor 1!\n";
        }
        ~A () {
            std::cout << "Hello from Destructor 1!\n";
        }
};

class B {
    public:
        B () {
            std::cout << "Hello from Constructor 2!\n";
        }
        ~B () {
            std::cout << "Hello from Destructor 2!\n";
        }
};

int main () {
    A a;
    B b;
    
    return 0; 
}

/*
Hello from Constructor 1!
Hello from Constructor 2!
Hello from Destructor 2!
Hello from Destructor 1!
*/
