// =============================================================
// COMPLETE C++ STL DOCUMENTATION + MASTER REFERENCE
// FULLY CORRECTED + COMPILE READY
// Compile Command:
// g++ -std=c++17 STL.cpp -o STL
// =============================================================

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <iterator>
#include <iomanip>
#include <cmath>
#include <limits>
#include <functional>
#include <numeric>
#include <bitset>
#include <array>
#include <tuple>

using namespace std;

// =====================================================
// PAIRS
// =====================================================
void Pairs(){

    pair<int,int> p1 = {1,3};

    cout<<"First: "<<p1.first<<endl;
    cout<<"Second: "<<p1.second<<endl;

    pair<int,pair<int,int>> p2 = {1,{3,4}};

    cout<<p2.first<<" "
        <<p2.second.first<<" "
        <<p2.second.second<<endl;

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};

    cout<<arr[0].first<<endl;
    cout<<arr[0].second<<endl;
}

// =====================================================
// VECTORS
// =====================================================
void Vectors(){

    vector<int> v1;

    v1.push_back(10);
    v1.emplace_back(20);

    cout<<"Front: "<<v1.front()<<endl;
    cout<<"Back: "<<v1.back()<<endl;

    vector<pair<int,int>> v2;

    v2.push_back({1,2});
    v2.emplace_back(3,4);

    vector<int> v3(5,100);

    vector<int> v4(5);

    vector<int> v5(v1);

    vector<int> v = {1,2,3,4,5,70};

    vector<int>::iterator it = v.begin();

    it++;

    cout<<*(it)<<endl;

    it = it + 2;

    cout<<*(it)<<endl;

    vector<int>::iterator it1 = v.end();

    it1--;

    cout<<*(it1)<<endl;

    vector<int>::reverse_iterator rit = v.rbegin();

    cout<<*(rit)<<endl;

    cout<<"Normal Iteration"<<endl;

    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }

    cout<<endl;

    cout<<"Auto Iterator"<<endl;

    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }

    cout<<endl;

    cout<<"Range Based Loop"<<endl;

    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    // Erase

    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    arr.erase(arr.begin());

    arr.erase(arr.begin()+2);

    for(auto i:arr){
        cout<<i<<" ";
    }

    cout<<endl;

    arr.erase(arr.begin()+2, arr.begin()+4);

    // Insert

    vector<int> kgf(5,100);

    kgf.insert(kgf.begin(),300);

    kgf.insert(kgf.begin()+1,2,10);

    vector<int> copy(2,50);

    kgf.insert(kgf.begin(),copy.begin(),copy.end());

    // Size

    cout<<"Size: "<<kgf.size()<<endl;

    // Pop

    kgf.pop_back();

    // Swap

    vector<int> leo = {1,2,3,4,5};

    kgf.swap(leo);

    // Clear

    copy.clear();

    // Empty

    cout<<v.empty()<<endl;

    // Fill

    fill(begin(kgf), end(kgf), 10);

    // Assign

    kgf.assign(5,20);

    for(auto i:kgf){
        cout<<i<<" ";
    }

    cout<<endl;
}

// =====================================================
// LIST
// =====================================================
void LinkedList(){

    list<int> ll;

    list<int> ll2(5,100);

    ll.push_front(20);

    ll.push_back(10);
    ll.sort();

    list<int> ll2(5,100);
    ll2.sort();
    ll.merge(ll2);

    ll.emplace_front(5);
    ll.emplace_back(50);

    if(!ll.empty()){
        cout<<ll.front()<<endl;
        cout<<ll.back()<<endl;
    }

    ll.pop_front();

    ll.pop_back();

    ll.swap(ll2);

    ll.reverse();
    ll.merge(ll2);

    ll.resize(5);

    ll.insert(ll.begin(),3,1000);

    cout<<"List Size: "<<ll.size()<<endl;

    for(auto i:ll){
        cout<<i<<" ";
    }

    cout<<endl;
}

// =====================================================
// DEQUE
// =====================================================
void Dequeue(){

    deque<int> dq;

    deque<int> dq2(5,100);

    dq.push_front(20);

    dq.push_back(10);

    dq.emplace_front(5);

    dq.emplace_back(50);

    if(!dq.empty()){
        cout<<dq.front()<<endl;
        cout<<dq.back()<<endl;
    }

    dq.pop_front();

    dq.pop_back();

    dq.swap(dq2);

    dq.resize(5);

    dq.insert(dq.begin(),3,1000);

    cout<<"Deque Size: "<<dq.size()<<endl;

    for(auto i:dq){
        cout<<i<<" ";
    }

    cout<<endl;
}

// =====================================================
// STACK
// =====================================================
void Stack(){

    stack<int> st;

    stack<int> st2;

    st.push(20);

    st.push(10);

    st.emplace(100);

    cout<<st.top()<<endl;

    st.pop();

    st.push(300);

    st.swap(st2);

    cout<<"Size: "<<st.size()<<endl;

    cout<<"Empty: "<<st.empty()<<endl;
}

// =====================================================
// QUEUE
// =====================================================
void Queues(){

    queue<int> q;

    queue<int> q2;

    q.push(20);

    q.push(10);

    q.back() += 5;

    q.emplace(100);

    q.pop();

    q.push(300);

    q.swap(q2);

    cout<<"Size: "<<q.size()<<endl;

    cout<<"Empty: "<<q.empty()<<endl;

    if(!q.empty()){

        cout<<q.front()<<endl;

        cout<<q.back()<<endl;
    }
}

// =====================================================
// PRIORITY QUEUE
// =====================================================
void PriorityQueue(){

    // Max Heap

    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    pq.emplace(100);

    cout<<pq.top()<<endl;

    pq.pop();

    cout<<pq.top()<<endl;

    // Min Heap

    priority_queue<int,vector<int>,greater<int>> minpq;

    minpq.push(10);
    minpq.push(5);
    minpq.push(20);

    cout<<minpq.top()<<endl;
}

// =====================================================
// SET
// =====================================================
void Set(){

    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(5);

    s.emplace(100);

    for(auto i:s){
        cout<<i<<" ";
    }

    cout<<endl;

    auto it = s.find(20);

    if(it != s.end()){
        cout<<"Found"<<endl;
    }

    cout<<s.count(5)<<endl;

    s.erase(5);

    cout<<"Size: "<<s.size()<<endl;

    auto lb = s.lower_bound(10);

    auto ub = s.upper_bound(20);

    if(lb != s.end()){
        cout<<"Lower Bound: "<<*lb<<endl;
    }

    if(ub != s.end()){
        cout<<"Upper Bound: "<<*ub<<endl;
    }
}

// =====================================================
// MULTISET
// =====================================================
void MultiSet(){

    multiset<int> ms;

    ms.insert(10);
    ms.insert(10);
    ms.insert(20);

    for(auto i:ms){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"Count of 10: "<<ms.count(10)<<endl;

    ms.erase(ms.find(10));

    for(auto i:ms){
        cout<<i<<" ";
    }

    cout<<endl;
}

// =====================================================
// UNORDERED SET
// =====================================================
void UnorderedSet(){

    unordered_set<int> us;

    us.insert(10);
    us.insert(20);
    us.insert(30);

    for(auto i:us){
        cout<<i<<" ";
    }

    cout<<endl;
}

// =====================================================
// MAP
// =====================================================
void Map(){

    map<int,int> m;

    m[1] = 2;
    m["SNK"]=90;
    m.emplace(2,4);

    m.insert({3,6});

    for(auto i:m){

        cout<<i.first<<" "
            <<i.second<<endl;
    }

    cout<<m[1]<<endl;

    auto it = m.find(2);

    if(it != m.end()){
        cout<<"Found"<<endl;
    }
}

// =====================================================
// MULTIMAP
// =====================================================
void MultiMap(){

    multimap<int,int> mm;

    mm.insert({1,10});
    mm.insert({1,20});
    mm.insert({2,30});

    for(auto i:mm){

        cout<<i.first<<" "
            <<i.second<<endl;
    }
}

// =====================================================
// UNORDERED MAP
// =====================================================
void UnorderedMap(){

    unordered_map<int,int> um;

    um[1] = 10;

    um[2] = 20;

    for(auto i:um){

        cout<<i.first<<" "
            <<i.second<<endl;
    }
}

// =====================================================
// SORTING
// =====================================================
void Sorting(){

    vector<int> arr = {5,2,4,1,3};

    sort(arr.begin(),arr.end());

    for(auto i:arr){
        cout<<i<<" ";
    }

    cout<<endl;

    sort(arr.begin(),arr.end(),greater<int>());

    for(auto i:arr){
        cout<<i<<" ";
    }

    cout<<endl;
}

// =====================================================
// PERMUTATION
// =====================================================
void Permutation(){

    string s = "abc";

    sort(s.begin(),s.end());

    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));
}

// =====================================================
// ALGORITHMS
// =====================================================
void Algorithms(){

    vector<int> v = {1,2,3,4,5,6,7,8,9};

    int maxi = *max_element(v.begin(),v.end());

    int mini = *min_element(v.begin(),v.end());

    int sum = accumulate(v.begin(),v.end(),0);

    int cnt = count(v.begin(),v.end(),5);

    cout<<"Maximum: "<<maxi<<endl;

    cout<<"Minimum: "<<mini<<endl;

    cout<<"Sum: "<<sum<<endl;

    cout<<"Count: "<<cnt<<endl;

    reverse(v.begin(),v.end());

    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    rotate(v.begin(),v.begin()+2,v.end());

    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    sort(v.begin(),v.end());

    auto it = find(v.begin(),v.end(),5);

    if(it != v.end()){
        cout<<"Found"<<endl;
    }

    cout<<binary_search(v.begin(),v.end(),7)<<endl;
}

// =====================================================
// BITSET
// =====================================================
void Bitset(){

    bitset<5> bt;

    bt.set();

    cout<<bt<<endl;

    bt.reset(2);

    cout<<bt<<endl;

    bt.flip(1);

    cout<<bt<<endl;

    cout<<bt.count()<<endl;
}

// =====================================================
// ARRAY STL
// =====================================================
void Arrays(){

    array<int,5> arr = {1,2,3,4,5};

    cout<<arr.at(2)<<endl;

    cout<<arr.front()<<endl;

    cout<<arr.back()<<endl;

    cout<<arr.size()<<endl;

    for(auto i:arr){
        cout<<i<<" ";
    }

    cout<<endl;
}

// =====================================================
// TUPLES
// =====================================================
void Tuples(){

    tuple<int,string,double> t1;

    t1 = make_tuple(1,"Shrinidhi",99.5);

    cout<<get<0>(t1)<<endl;

    cout<<get<1>(t1)<<endl;

    cout<<get<2>(t1)<<endl;
}

// =====================================================
// STRINGS
// =====================================================
void Strings(){

    string s = "Hello";

    s.push_back('!');

    cout<<s<<endl;

    reverse(s.begin(),s.end());

    cout<<s<<endl;

    sort(s.begin(),s.end());

    cout<<s<<endl;

    cout<<s.substr(1,3)<<endl;
}

// =====================================================
// CUSTOM COMPARATOR
// =====================================================
bool comp(pair<int,int> p1, pair<int,int> p2){

    if(p1.second < p2.second)
        return true;

    if(p1.second > p2.second)
        return false;

    return p1.first > p2.first;
}

void CustomComparator(){

    vector<pair<int,int>> v = {
        {1,2},
        {2,1},
        {4,1}
    };

    sort(v.begin(),v.end(),comp);

    for(auto i:v){

        cout<<i.first<<" "
            <<i.second<<endl;
    }
}

// =====================================================
// LAMBDA FUNCTION
// =====================================================
void LambdaFunction(){

    vector<int> v = {5,1,9,3,7};

    sort(v.begin(),v.end(),
    [](int a,int b){

        return a>b;
    });

    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;
}

// =====================================================
// MAIN FUNCTION
// =====================================================
int main(){

    cout<<"========== PAIRS =========="<<endl;
    Pairs();

    cout<<"========== VECTORS =========="<<endl;
    Vectors();

    cout<<"========== LIST =========="<<endl;
    LinkedList();

    cout<<"========== DEQUE =========="<<endl;
    Dequeue();

    cout<<"========== STACK =========="<<endl;
    Stack();

    cout<<"========== QUEUE =========="<<endl;
    Queues();

    cout<<"========== PRIORITY QUEUE =========="<<endl;
    PriorityQueue();

    cout<<"========== SET =========="<<endl;
    Set();

    cout<<"========== MULTISET =========="<<endl;
    MultiSet();

    cout<<"========== UNORDERED SET =========="<<endl;
    UnorderedSet();

    cout<<"========== MAP =========="<<endl;
    Map();

    cout<<"========== MULTIMAP =========="<<endl;
    MultiMap();

    cout<<"========== UNORDERED MAP =========="<<endl;
    UnorderedMap();

    cout<<"========== SORTING =========="<<endl;
    Sorting();

    cout<<"========== PERMUTATION =========="<<endl;
    Permutation();

    cout<<"========== ALGORITHMS =========="<<endl;
    Algorithms();

    cout<<"========== BITSET =========="<<endl;
    Bitset();

    cout<<"========== ARRAY =========="<<endl;
    Arrays();

    cout<<"========== TUPLES =========="<<endl;
    Tuples();

    cout<<"========== STRINGS =========="<<endl;
    Strings();

    cout<<"========== CUSTOM COMPARATOR =========="<<endl;
    CustomComparator();

    cout<<"========== LAMBDA FUNCTION =========="<<endl;
    LambdaFunction();

    return 0;
}

/*
=============================================================
STL CONTAINERS CLASSIFICATION
=============================================================

1. Sequence Containers
----------------------
vector
list
deque
array

2. Associative Containers
-------------------------
set
multiset
map
multimap

3. Unordered Associative Containers
-----------------------------------
unordered_set
unordered_multiset
unordered_map
unordered_multimap

4. Container Adaptors
---------------------
stack
queue
priority_queue

=============================================================
IMPORTANT STL COMPLEXITIES
=============================================================

Vector
Insert      -> O(1) amortized
Delete      -> O(n)
Search      -> O(n)

List
Insert      -> O(1)
Delete      -> O(1)
Search      -> O(n)

Deque
Insert      -> O(1)
Delete      -> O(1)
Search      -> O(n)

Set / Map
Insert      -> O(log n)
Delete      -> O(log n)
Search      -> O(log n)

Unordered Set / Map
Insert      -> O(1) average
Delete      -> O(1) average
Search      -> O(1) average

Priority Queue
Push         -> O(log n)
Pop          -> O(log n)
Top          -> O(1)

=============================================================
MOST IMPORTANT STL ALGORITHMS
=============================================================

sort()
reverse()
max_element()
min_element()
accumulate()
count()
find()
binary_search()
next_permutation()
rotate()
fill()
lower_bound()
upper_bound()

=============================================================
IMPORTANT HEADERS
=============================================================

<vector>
<list>
<deque>
<stack>
<queue>
<set>
<unordered_set>
<map>
<unordered_map>
<algorithm>
<numeric>
<tuple>
<array>
<bitset>

=============================================================
IMPORTANT INTERVIEW TOPICS
=============================================================

1. Vector vs List
2. Set vs Unordered Set
3. Map vs Unordered Map
4. Max Heap vs Min Heap
5. Iterators
6. Time Complexities
7. lower_bound vs upper_bound
8. push_back vs emplace_back
9. insert vs emplace
10. next_permutation
11. Custom Comparator
12. Lambda Functions
13. Iterator Invalidation
14. reserve() vs resize()
15. clear() vs erase()

=============================================================
USEFUL STL TIPS
=============================================================

begin()   -> first element
end()     -> after last element
rbegin()  -> reverse begin
rend()    -> reverse end

emplace() is faster than insert()
emplace_back() is faster than push_back()

unordered_map uses hashing

set/map internally use Red Black Tree

binary_search requires sorted data

=============================================================
COMMON STL MISTAKES
=============================================================

1. Using binary_search on unsorted array

2. Dereferencing end()

Wrong:
*v.end()

3. Iterator invalidation after erase/insert

4. Forgetting to sort before lower_bound()

=============================================================
COMPETITIVE PROGRAMMING STL TIPS
=============================================================

Fast IO:

ios::sync_with_stdio(false);
cin.tie(NULL);

Remove duplicates:

sort(v.begin(),v.end());

v.erase(unique(v.begin(),v.end()),v.end());

Descending Sort:

sort(v.begin(),v.end(),greater<int>());

=============================================================
END OF COMPLETE STL DOCUMENTATION
=============================================================
*/