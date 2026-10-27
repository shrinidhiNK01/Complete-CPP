#include<bits/stdc++.h>
using namespace std;

class B ;  //forward declaration , compiler needs to know about the class B before it is used in the friend function declaration of class A 
class A{
    int data;
    public:
    void setData(int data){
        this->data=data;
    }
    void getdata(){
        cout<<"The value of data is:"<<data<<endl;
    }

    friend void swap(A &o1, B &o2);  //friend function declaration
};

class B{
    int data;
    public:
    void setdata(int data){
        this ->data=data;
    }
    void getdata(){
        cout<<"The value of data is:"<<data<<endl;
    }
    friend void swap(A &o1, B &o2);  //friend function declaration

};

void swap(A &o1, B &o2){
    int temp=o1.data;
    o1.data=o2.data;
    o2.data=temp;
}

int main(){
    A a;
    B b;
    a.setData(10);
    b.setdata(20);
    swap(a, b);
    a.getdata();
    b.getdata();
}