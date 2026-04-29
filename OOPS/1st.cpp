#include<bits/stdc++.h>
using namespace std;

class Animal{ 
    private:
        int a,b,c;
    public:
      int d,e,f;
    //to access private member of a class
    void setData(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void getData(){
        cout<<"a is: "<<a<<endl;
        cout<<"b is: "<<b<<endl;
        cout<<"c is: "<<c<<endl;
    }
};

int main(){
    Animal ani;
    // ani.a=10;
    // ani.b=20;
    // ani.c=30;  Private access throws error, cannot modify
    ani.d=40;
    ani.e=50;
    ani.setData(10,20,30);  
    ani.getData();
    // cout<<"a is: "<<ani.a<<endl;
    // cout<<"b is: "<<ani.b<<endl;
    // cout<<"c is: "<<ani.c<<endl;   Private access throw errors, cannot modify
    cout<<"d is: "<<ani.d<<endl;
    cout<<"e is: "<<ani.e<<endl;


}