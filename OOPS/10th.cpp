// Constructors
#include<bits/stdc++.h>
using namespace std;
class Complex{
    int data1, data2;
    public:
    Complex(void);  //Constructor declaration
// Creating a Constructor
// Constructor is a special member function with the same name as of the class
//It is used to initialize the objects of its class
//It is automatically invoked whenever an object is created

void printNumber(){
    cout<<"Your number is:"<<data1<<" + "<<data2<<"i"<<endl;

}

};
Complex::Complex(void){  //This is a default constructor as it takes no parameters
    data1=20;
    data2=50;
    cout<<"Hello world"<<endl;
}




int main(){
    Complex c1;  //Object of class Complex
    c1.printNumber();
    // Here c1 is an object of class Complex and as soon as this object is created, the constructor is invoked automatically and the values are initialized.    
    // no need to call the constructor explicitly, it is automatically called when the object is created.
    return 0;
}

/*
Properties of Constructors:
1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.

*/