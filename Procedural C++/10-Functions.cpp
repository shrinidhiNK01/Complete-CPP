#include <bits/stdc++.h>
using namespace std;
int sum(int a,int b){
    return a+b;
}
void g(){
    cout<<"Hello World!"<<endl;
}
int main() {    
    // Function objects:- Function wrapped in a class
    // or we can say function object is a class which has overloaded () operator.
    cout<<"Enter two numbers: ";
    int a,b;
    cin>>a>>b;
    cout<<"Sum is: "<<sum(a,b)<<endl;

    g();
    return 0;
    
    
}