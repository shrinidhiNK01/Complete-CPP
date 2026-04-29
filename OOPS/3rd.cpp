#include<bits/stdc++.h>
using namespace std;
class one{
    string s;
    public:
    void input();
    void check();
};

void one::input(){
    cout<<"Enter a binary string:"<<endl;
    cin>>s;
}
void one::check(){
    for(int i=0;i<s.length();i++){
        if(s[i]!='0'&&s[i]!='1'){
            cout<<"It is not binary string"<<endl;
        }
        else{
            cout<<"It is Binary String"<<endl;
        }
        break;
    }
}

int main(){
    one o;
    o.input();
    o.check();

}