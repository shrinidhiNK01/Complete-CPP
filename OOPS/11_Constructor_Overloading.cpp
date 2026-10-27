#include<bits/stdc++.h>
using namespace std;
// Constructor Overloading
// Constructor overloading is a concept of having more than one constructor with different parameter lists.
// It allows the creation of objects in different ways, providing flexibility in object initialization.

class Complex{
    int data1, data2;
    public:
    Complex(void);  // Default constructor
    Complex(int a, int b);  // Parameterized constructor

    void printNumber();
};

Complex::Complex(void){  // Default constructor
    data1=0;
    data2=0;
    cout<<"Default Constructor called"<<endl;
}

Complex::Complex(int a, int b){  // Parameterized constructor
    data1=a;
    data2=b;
    cout<<"Parameterized Constructor called"<<endl;
}

void Complex::printNumber(){
    cout<<"Your number is:"<<data1<<" + "<<data2<<"i"<<endl;
}

int main(){
    Complex c1;  // Calls default constructor
    c1.printNumber();

    Complex c2(10, 20);  // Calls parameterized constructor
    c2.printNumber();

    return 0;
}
