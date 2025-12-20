#include <iostream>
#include <string>

class Person {
private:
    std::string name; 
    int age;

    //Private method, որն օգտագործողին հասանելի չի
    bool isShortString () const {
        return name.size () < 5;
    }

public:
    //Constructor
    Person (const std::string& m_name, int m_age) {
        this -> name = m_name;
        this -> age = m_age;
        std::cout << "Hello From Constructor!" << "\n";
    }

    //Destructor
    ~Person () {
        std::cout << "Hello From Destructor!" << "\n";
    }

    //Public method, որն օգտագործողին հասանելի է
    void introduce () const {
        std::cout << "Hi, my name is " << name << " and I am " << age << " years old." << "\n";

        if (isShortString ())
            std::cout << "My name is short!" << "\n";
        else
            std::cout << "My name is not short." << "\n";
    }
};

int main () {
    Person p ("Ghaya", 20);
    p.introduce ();
    
    return 0;
}
