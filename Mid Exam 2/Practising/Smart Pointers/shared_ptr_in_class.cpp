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
        shared_ptr<MyClass> shPtr1 = make_shared<MyClass> ();
        cout << "Shared count: " << shPtr1.use_count () << "\n"; //1
        {
            shared_ptr<MyClass> shPtr2 = shPtr1;
            cout << "Shared count: " << shPtr1.use_count () << "\n"; //2
        }
        cout << "Shared count: " << shPtr1.use_count () << "\n"; //1
    }

    // cout << "Shared count: " << shPtr1.use_count () << "\n"; //չի թողնի
    
    cout << "This just for showing that ptr has been already deleted after '}'\n";

    return 0;
}
