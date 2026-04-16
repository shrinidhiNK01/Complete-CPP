#include<bits/stdc++.h>
using namespace std;
int main(){
    //&=>address of operator
    // * =>value at address operator/ dereference operator
   cout<<endl;
    int a=10;
    int *p=&a;
    int **q=&p;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    cout<<a<<endl;
    cout<<&a<<endl;

    cout<<*(&p)<<endl;
    cout<<*(&a)<<endl;

    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    //pointers->store address of another variable

    int b=20;
    int *ptr=&b;

}