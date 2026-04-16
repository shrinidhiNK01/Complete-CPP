#include<bits/stdc++.h>
using namespace std;

//Pairs
void Pairs(){ 
    pair<int, int> p1={1,3};                     //p={1,3}
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int, pair<int,int>> p2={1,{3,4}};       //p={1,{3,4}}
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int, int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<endl;
    cout<<arr[0].second<<endl;
}

void Vectors(){
    vector<int> v1;
    v1.push_back(10);
    v1.emplace_back(20); //Faster
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;

    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(3,4);

    vector<int> v3(5,100);  //(size,data)
    vector<int> v4(5);  //(size)
    vector<int> v5(v1);  //(Similar copy of v1)

    //Accessing Vectors :- Iterators
    vector<int> v={1,2,3,4,5,70};
    vector<int> v11={11,12,13,14,15,170};  // renamed to avoid redeclaration error

    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<endl;
 
    it=it+2;
    cout<<*(it)<<endl;

    vector<int>::iterator it1=v.end();  
    it1--;    
    vector<int>::iterator it2=v.begin();
    vector<int>::reverse_iterator it3=v.rend();  
    vector<int>::reverse_iterator it4=v.rbegin(); 

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    for(auto it:v){
        cout<<it<<" ";
    }

    //Deletion
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    arr.erase(arr.begin()); 
    arr.erase(arr.begin()+2); 

    for(auto i:arr){
        cout<<i;   // corrected
    }

    arr.erase(arr.begin()+2, arr.begin()+4); 

    //Insertion
    vector<int> kgf(5,100); 
    kgf.insert(kgf.begin(),300);   // corrected
    kgf.insert(kgf.end(),78);      // corrected
    kgf.insert(kgf.begin()+3,90);  // corrected
    kgf.insert(kgf.begin()+4,3,90);

    vector<int> copy(2,50);
    copy.insert(copy.begin(),copy.begin(),copy.end());
    
    //Size
    cout<<kgf.size();

    //Operations
    vector<int> leo={1,2,3,4,5,6};
    kgf.pop_back();
    kgf.swap(leo);
    copy.clear();
    cout<<v.empty();
    fill(begin(kgf), end(kgf), 10);
}

void LinkedList(){
    list<int> ll;
    list<int> ll2(5,100);
    ll.push_front(20);
    ll.push_back(10);
    ll.pop_front();
    ll.pop_back();
    ll.back();
    ll.front();
    ll.swap(ll2);
    ll.reverse();
    ll.begin();
    ll.end();
    ll.emplace_front(10);
    ll.emplace_back(20);
    ll.rbegin();
    ll.rend();
    ll.resize(5);
    ll.insert(ll.begin(),3,1000);
    ll.size();
}

void dequeue(){
    deque<int> dq;
    deque<int> dq2(5,100);
    dq.push_front(20);
    dq.push_back(10);
    dq.pop_front();
    dq.pop_back();
    dq.back();
    dq.front();
    dq.swap(dq2);
    // dq.reverse();
    dq.begin();
    dq.end();
    dq.emplace_front(10);
    dq.emplace_back(20);
    dq.rbegin();
    dq.rend();
    dq.resize(5);
    dq.insert(dq.begin(),3,1000);
    dq.size();

}
 
void Stack(){  //O(1)
    stack<int> st;
    stack<int> st2;
    st.push(20);
    st.push(10);
    st.pop();
    st.emplace();
    cout<<st.top();
    st.push(300);
    st.swap(st2);
    st.size();
    cout<<st.empty();
}

void queues(){  //O(1)
    queue<int> q;
    queue<int> q2;
    q.push(20);
    q.push(10);
    q.back()+=5;
    q.pop();
    q.emplace();
    q.push(300);
    q.swap(q2);
    q.size();
    cout<<q.empty() ;  
    cout<<q.back();              
    cout<<q.front();              

}

void PriorityQueue(){

    //Max Heap => Stores in descending order, higher to lower
    priority_queue<int> pq;
    priority_queue<int> pq2;
    pq.push(10);  //log(n)
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.emplace(60);
    cout<<pq.top(); //O(1)
    pq.pop();  //O(logn)
    cout<<pq.top();
    pq2.swap(pq);      

    //Minimum Heap = it stores according to the accessending order, Lower to higher
    priority_queue<int,vector<int>, greater<int> > pq;
    pq.push(5);
    pq.push(10);
    pq.push(8);
    pq.push(2); 
    pq.emplace(20); 
    cout<<pq.top();          //2
    
}

void Set(){ //log(n)
    //Stores everything insorted order and no duplicate values, all are unique
    set<int> s;
    s.insert(40);
    s.insert(3);
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.emplace(20); //Everything will be in sorted fashion

    auto it=s.find(3); //3->Index
    auto it=s.find(20); //If the Index has no value then it returns the last value of set
    s.erase(10);  //log(n)
    int cnt=s.count(1);
    auto it=s.find(3);
    s.erase(it);

    auto it1=s.find(2);
    auto it2=s.find(20);
    s.erase(it1,it2);  //including 2 till 19th index , all items will be erased

    s.begin();
    s.rbegin();
    s.rend();
    s.end();
    s.rend();
    s.size();
    
    auto it=s.lower_bound(2);
    auto it=s.upper_bound(3);

}

void Multiset(){ 
    //Stores duplicate values + set properties
    multiset<int> ms;
    ms.insert(40);
    ms.insert(3);
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.emplace(30);
    ms.emplace(30);
    ms.emplace(30);
    ms.emplace(30);
    ms.erase(30);    //all 30 are erased
    int cnt=ms.count(1);
    ms.erase(ms.find(1));
    ms.erase(ms.find(1), next(ms.find(1), 2));

}

void UnorderedSet(){ //O(1)
    //Same as Set + Unique+ No sorted order 
    unordered_set<int> us;
    //Random order
    //lower_bound and upper_bound dont work, except that everything is same
    //Worst case:-O(n)
}

void Map(){ //Stores sorted Order, with unique keys
    map<int,int> m;
    map<int,pair<int,int>> m2;
    map<pair<int,int>,pair<int,int>> m3;
    map<pair<int,int>,int> m4;
    map<int,int> mp;
    map<string,int> mp2;
    map<int,string> mp3;
    

    m[1]=2;
    m.emplace(3, 4);
    m.insert({1,2});
    m4[{2,3}]=10;

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<m[1];
    cout<<m[2];

    auto it=m.find(3);
    auto it=m.find(5);
    auto it=m.lower_bound(5);
    auto it=m.upper_bound(5);
    // cout<<*(it).second; if it is paired

}

void MultiMap(){
    // We can store duplicate keys in sorted, O(logn)
}
void UnorderedMap(){
    // Unique keys in unsorted, O(1)
    unordered_map<int,int> umm;
    for(auto i:umm){
        cout<<i.first<<" "<<i.second<<endl;
    } 

}


void Sorting(){
    vector<int> arr={1,2,3,4,5};
    sort(arr.begin(),arr.end());
    sort(arr.begin(),arr.end(),greater<int>());


}
void permutation(){
    string s="abc";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
}
int main(){
    //Containers
    Pairs();
    Vectors();
    LinkedList();
    dequeue();
    queues();
    PriorityQueue();
    Set();
    Multiset();
    UnorderedSet();
    Map();
    MultiMap();
}
