#include<bits/stdc++.h>
using namespace std;
int main(){ 
    //Hasing is possible for 10^6 locally(inside main) and 10^9 (globally)
    int n,arr[10];
    cout<<"Enter number of Array Elements:"<<" ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Precompute
    int hash[10]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;    
    cout<<"How much u times u want to continue?"<<" ";
    cin>>q;

    while(q--){
        int num;
        cout<<"Enter the number u want to check the frequency:"<<endl;
        cin>>num;
        //fetch
        cout<<hash[num]<<endl;
    }

    //Character hashing:- 'a'=97 , 'a'-'a'=0, 'f'(102)-'a'(97)=5 , max=256
    string s;
    cout<<"Enter number of Character array Elements:"<<" ";
    cin>>s;

    //Precompute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;    
    cout<<"How much u times u want to continue?"<<" ";
    cin>>q;

    while(q--){
        char num;
        cout<<"Enter the number u want to check the frequency:"<<endl;
        cin>>num;
        //fetch
        cout<<hash[num-'a']<<endl;
    }
}