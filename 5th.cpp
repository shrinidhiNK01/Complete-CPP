#include<bits/stdc++.h>
using namespace std;
int main(){
    // Pointer is the datatype that stores the address of another variable. It is a powerful feature of C++ that allows us to manipulate memory directly. It is used for dynamic memory allocation, arrays, functions, etc.
    //&=>address of operator
    // * =>value at address operator/ dereference operator
   cout<<endl;
    int a=10;
    int *p=&a;  // p is a pointer variable that stores the address of a. It is declared as int* because it points to an integer variable.
    cout<<p<<endl;  // it will print the address of a
    int **q=&p;    // q is a pointer to pointer variable that stores the address of p. It is declared as int** because it points to a pointer variable that points to an integer variable. //pointer to pointer is used to store the address of another pointer variable. It is used for dynamic memory allocation, arrays, functions, etc.
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