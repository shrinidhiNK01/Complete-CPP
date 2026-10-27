#include<bits/stdc++.h>
using namespace std;
class Employee{
    int id;   //by default private
    int salary; //by default private
    public:
        void setId(void){
            salary=122;
            cout<<"Enter the id of the employee "<<endl;
            cin>>id;
        }
        void getId(){
            cout<<"The id of the employee is "<<id<<endl;
        }
};

class Complex{
    int a,b;
    public:
        void setData(int a,int b){
            this->a=a;
            this->b=b;
        }
        void setDataBySum(Complex o1,Complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){

    // Employee kriti,shruthi,tapsi,aishwarya;
    // kriti.setId();
    // kriti.getId();
    // shruthi.setId();
    // shruthi.getId();

    // If there are 1000 employees then we have to write 1000 lines of code which is not possible so we use array of objects
    Employee employees[5];
    for(int i=0;i<5;i++){
        employees[i].setId();
        employees[i].getId();
    }

    Complex c1,c2,c3;
    c1.setData(1,4);
    c1.printNumber();

    c2.setData(5,7);
    c2.printNumber();

    c3.setDataBySum(c1,c2);
    c3.printNumber();



}