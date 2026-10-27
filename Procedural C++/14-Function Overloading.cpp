// Function Overloading in C++ is a feature that allows you to have more than one function with the same name but different parameters. The compiler determines which function to call based on the number and types of arguments passed to the function. This can make your code more readable and easier to maintain.

#include<bits/stdc++.h>
using namespace std;
int sum(int a, int b){
    return a+b;
}
double sum(double a, double b){
    return a+b;
}
int hi(int a,int b,int c){
    return a+b+c;
}
int hi(int a,int b){
    return a+b;
}
int main(){
    cout<<sum(5, 10)<<endl;
    cout<<sum(5.5, 10.5)<<endl;
    cout<<hi(5, 10, 15)<<endl;
    cout<<hi(5, 10)<<endl;
}