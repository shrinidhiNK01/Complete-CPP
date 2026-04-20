#include<bits/stdc++.h>
using namespace std;
int main(){
    // Loops:-
    // 1. For loop:-
    for(int i=0;i<5;i++){  //initialization, condition, update
        cout<<i<<" ";
    }
    cout<<endl;
    // 2. While loop:-
    int i=0;
    while(i<5){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    // 3. Do-while loop:-
    i=0;
    do{
        cout<<i<<" ";
        i++;
    }while(i<5);
    cout<<endl;
    // Nested loops:-
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<i<<" "<<j<<" ";
        }
        cout<<endl;
    }

    // Break and continue:-
    // 1. Break:-
    for(int i=0;i<5;i++){
        if(i==3){
            break;  // it will exit the loop when i is 3
        }
        cout<<i<<" ";
    }
    cout<<endl;
    // 2. Continue:-
    for(int i=0;i<5;i++){
        if(i==3){
            continue;  // it will skip the iteration when i is 3
        }
        cout<<i<<" ";
    }
    cout<<endl;
    

}