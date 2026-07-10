#include <iostream>
using namespace std;

class clsPerson {
public:
    string FullName = "Mohammed Abu hahude";
};

class clsEmployee : public clsPerson {
public:
    string Title = "CEO";
};

int main() {
    clsEmployee e;  
    
    // Upcasting آمن وتلقائي: مؤشر الأب يشير لكائن الابن
    clsPerson* p = &e;
    p->FullName = "Abdulrahman Alhayek";
    cout << "Upcasting Result: " << p->FullName << endl;

    // clsPerson p_parent;
    // clsEmployee* e_ptr = &p_parent; // Syntax Error
    // تعليق تعليمي: ما بقدر اعمل مؤشر من صغير (ابن) على كبير (أب) تلقائياً
    
    return 0;
}
