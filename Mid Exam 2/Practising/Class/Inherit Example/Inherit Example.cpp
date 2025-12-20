/* Սահմանել դաս,որի պաշտպանված անդամներն են 1. Կառուցվածք տիպի զանգվածի ցուցիչը/ կառուցվածքի դաշտերն են 
ա/ ազգանուն, բ/ թոշակ գ/ ստաժ / 2. այդ զանգվածի տարրերի քանակը:Այս դասի համար սահմանել բաց ժառանգ դաս, 
որի բաց ֆունկցիաներից մեկը ստանում և արտածում է տրված թվից շատ թոշակ ստացողների  ցուցակը:Պահանջվում է 
ժառանգ դասի օբյեկտի միջոցով  արտածել տրված թվից շատ թոշակ ստացողների  ցուցակը: */
#include <iostream>
#include <cstring>

struct Person {
    char surname[20];
    int scholarship;
    int experience;
};

class C {
    protected:
        Person *x;
        int n;
    public:
        C (Person *x1, int n1) {
            x = x1;
            n = n1;
        }
        ~C () {}
};

class C_Jarang: public C {
    public:
        C_Jarang (Person *x2, int n2) : C (x2, n2) {}
        
        ~C_Jarang () {}
        
        void f (int num) {
            size_t count = 0;
            Person y[20];
            std::cout << "People whose scholarship is higher than number are: \n";
            
            for (size_t i = 0; i < n; ++ i)
                if (x[i].scholarship > num) {
                    strcpy (y[count].surname, x[i].surname);
                    y[count].scholarship = x[i].scholarship;
                    y[count].experience = x[i].experience;
                    count ++;
                }
            
            if (count == 0)
                std::cout << "There is not person whose scholarship is higher than number." << "\n";
            else 
                for (size_t i = 0; i < count; ++ i)
                    std::cout << y[i].surname << " - " << y[i].scholarship << " - " << y[i].experience << "\n";
        } 
};

int main () {
    size_t count, number;
    Person arr[20];
    
    do {
        std::cout << "Number = ";
        std::cin >> number;
    } while (number < 0);
    
    do {
        std::cout << "Count = ";
        std::cin >> count;
    } while (count < 2 || count > 20);
    
    std::cout << "Input surname, scholarship, experience: " << "\n";
    for (size_t i = 0; i < count; ++ i) 
        std::cin >> arr[i].surname >> arr[i].scholarship >> arr[i].experience;
        
    C_Jarang ob (arr, count);
    ob.f (number);
    
    return 0;
}

/* Output
Number = 7000
Count = 3
Input surname, scholarship, experience: 
A 5000 3
B 10000 8
C 20000 4
People whose scholarship is higher than number are: 
B - 10000 - 8
C - 20000 - 4
*/
