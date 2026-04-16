#include<bits/stdc++.h>
using namespace std;
int main(){
    //Vector Declaration
    vector<int> v; //Dynamic Array
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back(); //Removes last element
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of Vector: "<<v.size()<<endl;
    cout<<"Capacity of Vector: "<<v.capacity()<<endl;
    cout<<"Max Size of Vector: "<<v.max_size()<<endl;

   list<int> ll;
   ll.push_back(2);
   ll.push_back(3);
   ll.push_back(4);
   ll.push_front(5);
   ll.push_front(6);
   for(auto i:ll){
        cout<<i<<" ";
   }
   ll.pop_back();
   ll.pop_front();
   ll.size();
   cout<<"Size of List: "<<ll.size()<<endl;
}