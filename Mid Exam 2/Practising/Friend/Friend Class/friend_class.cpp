#include <iostream>
using namespace std;

class EquilateralTriangle {
    private:
        float a;
        float circumference;
        float area;
    public:
        void setA (float length) {
            a = length;
            circumference = 3 * a;
            area = (1.73 * a * a) / 4;
        }

        friend class Homework;
};

class Homework {
    public:
        void PrintResults (EquilateralTriangle obj) {
            cout << "Circumference = " << obj.circumference << "\n";
            cout << "Area = " << obj.area << "\n";
        }
};


int main () {
	EquilateralTriangle object;
    object.setA (3);

    Homework h;
    h.PrintResults (object);

	return 0;
}
