#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cout<<"Enter Your name"<<endl;
    getline(cin,s);
    cout<<"U r name is "<<" "<<s<<endl;

    cout<<"Your Lucky number"<<endl;
    int day;
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Lowday"<<endl;
            break;
    }

    cout<<"Enter 6 leeters"<<endl;
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    cout<<"Sum:"<<a+b+c+d+e+f;

    int arr[10]; //1d array
    int arr2[10][20]; //2d array

    string s2 ="Shrinidhi";
    int len=s2.size();
    cout<<s2[len-1];

}
