#include <iostream>
#include <string>
#include <string_view>

class C {
public:
/* & - մենք աշխատում ենք ոչ թե քոփիի, այլ օրիգինալի հետ */
    void foo1 (std::string& str) {
        std::cout << str << "\n";
    }
    
    void foo2 (const std::string& str) {
        std::cout << str << "\n";
    }
    /* Նույն բանն են */
    void foo3 (const std::string_view& str) {
        std::cout << str << "\n";
    }
};

int main () {
    C obj;

    // obj.foo1 ("Hello"); //չի աշխատի
    /* Ֆունկցիան ուզում ա հղվի իրա վրա, նայց ինքը ժամանակավոր լիտորալա, հենց էս տողն անցնի ինքն էլ գոյություն չի ունենա։ Եթե սենց բան թույլատրվել էր, կհղվեր գոյություն չունեցող օբյեկտի վրա, դա էլ կտար undefined behavior  */
    
    obj.foo2 ("World"); //կաշխատի
    /* const-ը հնարավորություն ա տալիս ժամանակավոր օբյեկտը հղել։ Compiler-ը գառանծիա ա տալիս, որ ժամանակավոր օբյեկտի lifetime-ը կերկարի */
    
    obj.foo3 ("Hello"); //կաշխատի

    //
    const int &d = 3;
    
    //Նույն բանն են
    
    int i = 3;
    const int &k = i;

    return 0;
}
