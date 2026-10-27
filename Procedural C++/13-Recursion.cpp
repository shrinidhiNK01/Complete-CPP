#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1 ;
    }
    return n*factorial(n-1);
}
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    cout<<factorial(5)<<endl;
    cout<<fibonacci(10)<<endl;
}