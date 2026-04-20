#include<bits/stdc++.h>
using namespace std;
int main() {
    int a=10;
    char c='c';
    cout<<a<<endl;
    cout<<c<<endl;
    a=90;
    c='u';
    cout<<a<<endl;
    cout<<c<<endl;

    //Constants in cpp
    const int b=10;
    const char d='c';
    cout<<b<<endl;
    cout<<d<<endl;
    // b=90;    => Throws error , Cannot be manipulated
    // d='u';
    // cout<<b<<endl;
    // cout<<d<<endl;

    // Control Structures:-
    // ==============================
    // 1. If-else elseif statement:-
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"You are a minor"<<endl;
    }
    else if(age>=18 && age<60){
        cout<<"You are an adult"<<endl;
    }
    else{
        cout<<"You are a senior citizen"<<endl;
    }

}