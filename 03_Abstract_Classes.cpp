#include <iostream>
using namespace std;

// Abstract Class (كلاس تجريدي كامل لا يمكن إنشاء كائنات منه مباشرة)
class clsGlobal {
public:
    virtual void print(string Message) = 0; // Pure Virtual Function
    virtual int Sum(int Number1, int Number2) = 0;
    virtual string FullName(string FirstName, string LastName) = 0;
};

class clsSpecial : public clsGlobal {
public :
    void print(string Message) override {
        cout << "The Message is : " << Message << endl;
    }
    int Sum(int Number1, int Number2) override {
        return Number1 + Number2;
    }
    string FullName(string FirstName, string LastName) override {
        return FirstName + " " + LastName;
    }
};

int main() {
    clsSpecial sp; // مسموح لأننا قمنا بعمل Implementation لجميع الدوال النقية
    sp.print("Hello Dude");
    cout << "Full Name: " << sp.FullName("Abd", "Alrahman") << endl;
    
    system("pause>0");
    return 0;
}
