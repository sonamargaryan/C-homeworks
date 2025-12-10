/* Ոնց անենք որ առանց վիրտուալ գրելու, տպի ժառանգինը */
#include <iostream>
using namespace std;

class Base {
public:
    //ptr
    /* ոնց որ ձեռքով հավաքենք virtual table */
    void (*func) (Base*, int);

    Base () {
        func = Base::impl;
    }

    static void impl (Base* self, int x) {
        cout << "Base: " << x << "\n";
    }

    void foo (int x = 20) {
        func (this, x);
    }
};

class Derived : public Base {
public:
    Derived () {
        func = Derived::impl;
    }

    static void impl (Base* self, int x) {
        cout << "Derived: " << x << "\n";
    }

    void foo (int x = 100) {
        func (this, x);
    }
};

int main () {
    Base* ptr_base = new Derived ();
    ptr_base -> foo ();   //20

    Derived ptr_derived;
    ptr_derived.foo ();    //100
}
