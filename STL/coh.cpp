#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int hi;
    for(int i=0;i<10;i++){
        cin>>hi;
        arr.push_back(hi);
    }
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }
}