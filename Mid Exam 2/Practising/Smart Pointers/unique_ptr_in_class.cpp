#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass () {
        cout << "Constructor invoked \n";
    }
    ~MyClass () {
        cout << "Destructor invoked \n";
    }

};

int main () 
{
    
    {
        unique_ptr<MyClass> unPtr1 = make_unique<MyClass> ();
    }
    
    cout << "This just for showing that ptr has been already deleted after '}'\n";

    return 0;
}
