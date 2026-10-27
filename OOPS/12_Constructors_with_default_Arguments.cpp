#include<bits/stdc++.h>
using namespace std;

class Complex{
    int data1, data2;
    public:
    Complex(int a=0, int b=0);  // Constructor with default arguments

    void printNumber();
};

Complex::Complex(int a, int b){
    data1=a;
    data2=b;
}

// Scope resolution operator is used to define the member function outside the class
void Complex::printNumber(){
    cout<<"Your number is:"<<data1<<" + "<<data2<<"i"<<endl;
}  


int main(){
    Complex c1;  // Calls constructor with default arguments
    c1.printNumber();

    Complex c2(10, 20);  // Calls constructor with specified arguments
    c2.printNumber();

    return 0;
}