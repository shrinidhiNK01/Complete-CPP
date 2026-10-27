#include<bits/stdc++.h>
using namespace std;

// Destructor in C++ will be called automatically when the object goes out of scope or is explicitly deleted. It is used to release resources that the object may have acquired during its lifetime, such as memory, file handles, or network connections. The destructor has the same name as the class but is preceded by a tilde (~) symbol.

// It never takes any arguments and does not return any value. It is automatically invoked when an object is destroyed, either when it goes out of scope or when it is explicitly deleted using the delete operator.

int count = 0;  // Global variable to keep track of the number of objects created
class Complex{
    
    int data1, data2;
    public:
    Complex(int a, int b);  // Constructor
    ~Complex();  // Destructor

    void printNumber();
};

Complex::Complex(int a, int b){
    ::count++;
    cout<<"Constructor called for the object"<<::count<<endl;
    data1 = a;
    data2 = b;
}

Complex::~Complex(){
    ::count--;
    cout<<"Destructor called for the object"<<::count<<endl;
}

void Complex::printNumber(){
    cout<<"Your number is:"<<data1<<" + "<<data2<<"i"<<endl;
}

int main(){
    Complex c1(10, 20);
    c1.printNumber();

    cout << "Creating first object n1" << endl;
    Complex n1(30, 40);
    {
        cout << "Entering this block" << endl;
        cout << "Creating two mor e objects" << endl;    
        Complex n2(50, 60), n3(70, 80);
        cout << "Exiting this block" << endl;
    }

    cout << "Back to main" << endl;

    return 0;
}