#include<bits/stdc++.h>
using namespace std;

// Protected Access Modifier in Inheritance in C++:
// In C++, the protected access modifier is used to control the accessibility of class members (data members and member functions) in the context of inheritance. When a member is declared as protected, it can be accessed by the class itself, its derived classes, and friends of the class. However, it cannot be accessed directly from outside the class hierarchy.=> Its like private access modifier but with a difference that it can be inherited by derived class and can be accessed by derived class.

class Base {
    protected:
    int data1; //protected member variable, can be accessed by derived class but cannot be accessed outside the class

    public:
    int data2; //public member variable, can be accessed outside the class and can be inherited by derived class

    void setdata();
    int getdata1();  
    int getdata2();  
};

void Base::setdata(void){
    data1=20;
    data2=30;
}

int Base::getdata1(void){
    cout << "Value of data 1 is " << data1 << endl;
    return data1;
}
int Base::getdata2(void){
    cout << "Value of data 2 is " << data2 << endl;
    return data2;
}

class Derived: public Base{ // Class is being derived publically
    int data3;
    public:
    void process();
    void display();
};


Note
..

For a protected member:

1. Private members
2. Protected members
3. Public members

Public derivation
Not Inherited
Protected
Public

Not Inherited
Protected
Protected

Private Derivarion Protected Derivation
Not Inherited
Private
Private

* /