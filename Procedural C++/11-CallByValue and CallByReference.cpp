#include <iostream>
using namespace std;
// call by value
void mySwap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
// call by reference using pointer
void swapPointer(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int & swapReference(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return a; // returning reference
}
int main() {
int a,b;
cout<<"Enter two numbers:";
cin>>a>>b;
mySwap(a,b);

cout<<"After swapping without pointer: "<<a<<" "<<b<<endl;
swapPointer(&a,&b);

cout<<"After swapping with pointer: "<<a<<" "<<b<<endl;

swapReference(a,b)=786; // assigning value to the reference returned by the function

cout<<"After swapping with reference: "<<a<<" "<<b<<endl;
return 0;
}