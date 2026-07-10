#include <iostream>
using namespace std;

class clsPerson {
public:
    // وضع كلمة virtual يضمن حدوث الـ Late Binding أثناء الـ Run-time
    virtual void Print() {
        cout << "Hi, i'm a person!\n";
    }
};

class clsEmployee : public clsPerson {
public:
    void Print() override {
        cout << "Hi, I'm an Employee\n";
    }
};

class clsStudent : public clsPerson {
public:
    void Print() override {
        cout << "Hi, I'm a student\n";
    }
};

int main() {
    clsEmployee Employee1;
    clsStudent Student1;

    // Polymorphism باستخدام الـ Upcasting والمؤشرات
    clsPerson* Person1 = &Employee1;
    clsPerson* Person2 = &Student1;

    // بفضل كلمة virtual، سيستدعي دالات الأبناء الحقيقية (Late Binding)
    Person1->Print();
    Person2->Print(); 

    system("pause>0");
    return 0;
}
