// building functions of classes out of class scope

#include<bits/stdc++.h>
using namespace std;

//class 
class Animal{ 
    private:
        int a,b,c;
    public:
      int d,e,f;
    //to access private member of a class
    void setData(int a,int b,int c);
    void getData();
};

void Animal::setData(int a,int b,int c){
    this->a=a;
    this->b=b;
    this->c=c;
}

void Animal::getData(){
    cout<<"a is: "<<a<<endl;
    cout<<"b is: "<<b<<endl;
    cout<<"c is: "<<c<<endl;
}

int main(){
    Animal a;
    a.setData(10,20,30);  
    a.getData();

}