#include <iostream>
#include <cstddef>

struct alignas(4) A
{
     int a;
     double b;
     char c;
};

int main()
{
    A ob;
    
    std::cout << alignof(A) << "\n";      // 8
    std::cout << alignof(int) << "\n";    // 4
    std::cout << alignof(double) << "\n"; // 8
    
    return 0;
}
//alignas (param) param must be power of 2
// օրինակ 8 բայթանի հասցեին տրամադրում է 16բայթ հասցե, եթե param = 16բայթ
// ամենավատ դեպքում ամենաշատ հիշողություն զբաղեցնող բաղադրիչի բայթերի քանակն է տպում
