#include <iostream>

class Int {
public:
    int value;

    //Default Constructor
    Int () {
        std::cout << "Hello From Default Constructor! Value = Garbage\n";
    }

    //Parameterized Constructor
    Int (int val) {
        value = val;
        std::cout << "Hello From Parameterized Constructor! Value = " << val << "\n";
    }

    //Copy Constructor 
    Int (const Int& other) { 
        value = other.value;
        std::cout << "Hello From Copy Constructor! Value = " << other.value << "\n";
    }
};

int main () {
    Int a; //Default Constructor
    Int b (5); //Parameterized Constructor
    Int c = b; //Copy Constructor
    
    return 0;
}
