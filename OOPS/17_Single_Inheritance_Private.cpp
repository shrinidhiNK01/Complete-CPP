#include <iostream>
using namespace std;

class Base{
  int data1; //private member variable, cannot be accessed outside the class, cannot be inherited by derived class

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
    return data1;
}
int Base::getdata2(void){
    return data2;
}

class Derived: private Base{ // Class is being derived publically
int data3;
public:
void process();
void display();


};

void Derived :: process(){
setdata();
data3 = data2 * getdata1();
}
void Derived :: display(){
cout << "Value of data 1 is " << getdata1() << endl;
cout << "Value of data 2 is " << data2 << endl;
cout << "Value of data 3 is " << data3 << endl;
}

int main(){
    Derived der;
    
    der.process();
    der.display();

    return 0;
}   