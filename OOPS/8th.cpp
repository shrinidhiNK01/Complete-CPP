#include<bits/stdc++.h>
using namespace std;

class Y;  //forward declaration , compiler needs to know about the class Y before it is used in the friend function declaration of class X 
class X{
    int data;
    public:
     void setData(int data){
        this->data=data;
     }
     friend void add(X, Y);  //friend function declaration
};

class Y{
    int data;
    public:
    void setData(int data){
        this-> data=data;
    }
    friend void add(X, Y);  //friend function declaration

};

void add(X o1, Y o2){
    cout<<"Sum of data is:"<<o1.data+o2.data<<endl;   //throws error because data is private and we are trying to access it from outside the class without using friend function
}

int main(){
    X obj1;
    Y obj2;
    obj1.setData(10);
    obj2.setData(2089);
    add(obj1, obj2);
    return 0;
}