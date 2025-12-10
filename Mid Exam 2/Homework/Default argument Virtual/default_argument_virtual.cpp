#include <iostream>
using namespace std;

class Base {
public:
    Base () {}
    virtual ~Base () {}
	virtual void foo (int t = 8) {
		cout << "t = " << t << "\n";
	}
};

class Derived1 : public Base {
public:
	Derived1 () : Base () {}
	virtual void foo (int t = 100) {
		cout << "t = " << t << "\n";
	}
};

class Derived2 : public Base {
public:
	void foo (int t = 100) override {
		cout << "t = " << t << "\n";
	}
};

int main () {
	Base* ptr1 = new Derived1 ();
	ptr1 -> foo (); //8

	//վտանգավոր
	Base* b = new Derived1 ();
	((Derived1*) b) -> foo (); //100

	return 0;
}
