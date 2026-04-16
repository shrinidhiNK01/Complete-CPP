#include <bits/stdc++.h>
using namespace std;

int main() {

    /*
    ============================================================
    1. SET (Ordered Set)
    ============================================================

    - Stores UNIQUE elements
    - Automatically SORTED
    - Implemented using RED-BLACK TREE
    - Time Complexity: O(log n)
    */

    set<int> s;

    // inserting elements
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);   // duplicate ignored

    // size
    cout << s.size() << endl;

    // check if empty
    cout << s.empty() << endl;

    // iterate using iterator
    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // iterate using auto
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // range based loop
    for(auto x : s){
        cout << x << " ";
    }
    cout << endl;


    /*
    ------------------------------------------------------------
    FIND
    ------------------------------------------------------------
    */

    auto it = s.find(20);

    if(it != s.end())
        cout << "Found\n";
    else
        cout << "Not found\n";


    /*
    ------------------------------------------------------------
    COUNT
    ------------------------------------------------------------
    Returns 1 if present, 0 if not
    */

    cout << s.count(10) << endl;
    cout << s.count(99) << endl;


    /*
    ------------------------------------------------------------
    ERASE
    ------------------------------------------------------------
    */

    s.erase(20);           // erase by value

    auto it2 = s.find(30);
    s.erase(it2);          // erase by iterator

    // erase range
    s.erase(s.begin(), s.end());


    /*
    ------------------------------------------------------------
    LOWER_BOUND
    First element >= value
    ------------------------------------------------------------
    */

    set<int> s2 = {10,20,30,40,50};

    auto lb = s2.lower_bound(25);
    cout << *lb << endl;   // 30


    /*
    ------------------------------------------------------------
    UPPER_BOUND
    First element > value
    ------------------------------------------------------------
    */

    auto ub = s2.upper_bound(30);
    cout << *ub << endl;   // 40


    /*
    ------------------------------------------------------------
    FRONT / BACK
    ------------------------------------------------------------
    */

    cout << *s2.begin() << endl;      // smallest
    cout << *s2.rbegin() << endl;     // largest


    /*
    ------------------------------------------------------------
    CLEAR
    ------------------------------------------------------------
    */

    s2.clear();


    /*
    ============================================================
    2. MULTISET
    ============================================================

    - Allows DUPLICATES
    - Sorted
    - Time Complexity O(log n)
    */

    multiset<int> ms;

    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);

    for(auto x : ms)
        cout << x << " ";
    cout << endl;


    /*
    COUNT duplicates
    */

    cout << ms.count(10) << endl;


    /*
    FIND
    */

    auto f = ms.find(10);

    if(f != ms.end())
        cout << "Found\n";


    /*
    ERASE
    */

    ms.erase(10);  // removes ALL 10s

    // erase only one occurrence

    auto itr = ms.find(20);
    ms.erase(itr);


    /*
    ============================================================
    3. UNORDERED_SET (HashSet)
    ============================================================

    - Uses HASH TABLE
    - NOT sorted
    - UNIQUE elements
    - Average Time Complexity: O(1)
    */

    unordered_set<int> us;

    us.insert(5);
    us.insert(10);
    us.insert(15);
    us.insert(5);     // ignored duplicate

    cout << us.size() << endl;


    /*
    ITERATE
    */

    for(auto x : us)
        cout << x << " ";
    cout << endl;


    /*
    FIND
    */

    auto f2 = us.find(10);

    if(f2 != us.end())
        cout << "Found\n";


    /*
    COUNT
    */

    cout << us.count(10) << endl;
    cout << us.count(100) << endl;


    /*
    ERASE
    */

    us.erase(10);   // erase value

    auto it3 = us.find(15);
    us.erase(it3);  // erase iterator


    /*
    CLEAR
    */

    us.clear();


    /*
    ============================================================
    4. BUCKET FUNCTIONS (Hashing internals)
    ============================================================
    */

    unordered_set<int> hs = {10,20,30,40};

    cout << hs.bucket_count() << endl;  // total buckets

    cout << hs.load_factor() << endl;   // elements/buckets

    cout << hs.max_load_factor() << endl;

    cout << hs.bucket(20) << endl;      // which bucket


    /*
    ============================================================
    5. ITERATORS
    ============================================================
    */

    set<int> st = {1,2,3,4,5};

    // forward iterator
    for(auto it = st.begin(); it != st.end(); it++)
        cout << *it << " ";

    cout << endl;

    // reverse iterator
    for(auto it = st.rbegin(); it != st.rend(); it++)
        cout << *it << " ";

    cout << endl;


    /*
    ============================================================
    6. COMMON LEETCODE PATTERNS
    ============================================================
    */

    // remove duplicates from array

    vector<int> nums = {1,2,2,3,3,4};

    set<int> unique(nums.begin(), nums.end());

    for(auto x : unique)
        cout << x << " ";


    /*
    check duplicates
    */

    unordered_set<int> seen;

    for(int x : nums){
        if(seen.count(x))
            cout << "Duplicate: " << x << endl;
        seen.insert(x);
    }


    /*
    find kth smallest
    */

    set<int> s3 = {10,20,30,40};

    auto it4 = s3.begin();
    advance(it4,2);   // move iterator

    cout << *it4 << endl;


    /*
    intersection of arrays
    */

    vector<int> a = {1,2,3,4};
    vector<int> b = {3,4,5};

    unordered_set<int> st1(a.begin(), a.end());

    for(int x : b){
        if(st1.count(x))
            cout << x << " ";
    }


    return 0;
}