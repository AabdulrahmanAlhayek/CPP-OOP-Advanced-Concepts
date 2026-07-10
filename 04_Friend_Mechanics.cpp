#include <iostream>
using namespace std;

class clsA {
private:
    int PrivateVar;
protected:
    int ProtectedVar;
public :
    int PublicVar;

    clsA() {
        PrivateVar = 10;
        ProtectedVar = 20;
        PublicVar = 30;
    }
    
    // إعلان الصداقة للسماح بكسر الحماية الآمن للـ Encapsulation
    friend class clsB;
    friend class clsC;
    friend int FreindFunction(clsA A1);
};

class clsB {
public:
    void Print(clsA A) {
        cout << "Public Var    = " << A.PublicVar << endl;
        cout << "Protected Var = " << A.ProtectedVar << endl;
        cout << "Private Var   = " << A.PrivateVar << endl;
    }
};

class clsC {
public:
    void Print() {
        clsA A;
        cout << "Class C accessing private: " << A.PrivateVar << endl;
    }
};

int FreindFunction(clsA A) {
    // الدالة الصديقة تستطيع قراءة وحساب كل مستويات الحماية
    return A.PublicVar + A.PrivateVar + A.ProtectedVar; 
}

int main() {
    clsB B;
    clsA A; 
    B.Print(A); 

    clsC C;
    C.Print();
    cout << "The Friend Function Result is : " << FreindFunction(A) << endl;
    
    system("pause>0");
    return 0;
}
