#include<bits/stdc++.h>
using namespace std;

class Complex{
    int data1, data2;
    public:
    Complex();  // Default constructor
    Complex(int a, int b);  // Parameterized constructor
    Complex(const Complex &obj);  // Copy constructor
    ~Complex();  // Destructor

    void printNumber();
};

Complex::Complex(){
    data1 = 0;
    data2 = 0;
}

Complex::Complex(int a, int b){
    data1=a;
    data2=b;
}

Complex::Complex(const Complex &obj){
    cout<<"Copy Constructor called"<<endl;
    data1=obj.data1;
    data2=obj.data2;
}

void Complex::printNumber(){
    cout<<"Your number is:"<<data1<<" + "<<data2<<"i"<<endl;
}

int main(){
    Complex c1(10, 20);  // Calls parameterized constructor
    c1.printNumber();

    Complex c2 = c1;  // Calls copy constructor
    c2.printNumber();

    Complex c3(c1);  // Calls copy constructor
    c3.printNumber();

    Complex c4(30, 40);  // Calls parameterized constructor
    c4.printNumber();

    Complex c5 = c1;  // Calls copy constructor
    c5.printNumber();

    Complex c6;
    c6 = c1;  // copy constructor not called here, assignment operator is used
    c6.printNumber();


    return 0;
}

//When no copy constructor is defined, the compiler provides a default copy constructor that performs a shallow copy of the object. However, if you define your own copy constructor, you can customize the copying behavior as needed.