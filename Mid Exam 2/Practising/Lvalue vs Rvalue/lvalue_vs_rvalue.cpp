#include <iostream>
#include <string>

int main() {
    std::string a = "Hello";   // a → lvalue (ունի անուն)
    std::string b = a;         // a-ն lvalue է

    std::string c = a + "!!!"; // a + "!!!" → rvalue (ժամանակավոր օբյեկտ)

    const std::string& ref = a + " world";  
    // Այստեղ նույնպես a + " world" → rvalue, բայց bindվում է const reference-ին

    return 0;
}
