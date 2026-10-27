#include<bits/stdc++.h>
using namespace std;

class Complex{
    int data1, data2;
    public:
    Complex(int a, int b);

    void printNumber();
};

Complex::Complex(int a, int b){
    data1=a;
    data2=b;
}

void Complex::printNumber(){
    cout<<"Your number is:"<<data1<<" + "<<data2<<"i"<<endl;
}

int main(){
    Complex *c1 = new Complex(10, 20);  // Dynamic initialization
    c1->printNumber();

    delete c1;  // Don't forget to free the allocated memory
    return 0;
}