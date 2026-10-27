#include<bits/stdc++.h>
using namespace std;
int main() {

//  Reference Variables
//     1. Reference variables are used to create an alias for a variable.
//     2. It is created using the & operator.
//     3. It must be initialized at the time of declaration.
//     4. It cannot be null.
//     5. It cannot be reassigned to another variable.
float x = 455;
float & y= x;
cout << x << endl;
cout << y << endl;

// Changing the value of x will change the value of y and vice versa.
    int a=10;
    char c='c';
    cout<<a<<endl;
    cout<<c<<endl;
    a=90;
    c='u';
    cout<<a<<endl;
    cout<<c<<endl;

    //Constants in cpp
    //=======================
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
