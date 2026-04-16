#include<bits/stdc++.h>
using namespace std;

/*
========================================================
HASHING STL CHEAT SHEET
Covers:
map
unordered_map
multimap
unordered_multimap
hash table utilities
common hashing patterns used in LeetCode
========================================================
*/


/*
========================================================
1. MAP (Ordered Map)
--------------------------------------------------------
Implementation: Red-Black Tree
Keys: Unique
Order: Sorted
Time Complexity:
insert/find/erase -> O(log n)
========================================================
*/

void MapExample()
{
    map<int,int> mp;

    // -------- INSERTION --------

    mp.insert({1,10});             // insert pair
    mp.insert(pair<int,int>(2,20));
    mp.insert(make_pair(3,30));

    mp.emplace(4,40);              // faster insert

    mp[5] = 50;                    // create if not exist

    // -------- ACCESS --------

    cout << mp[1] << endl;         // returns value
    cout << mp.at(2) << endl;      // throws error if not exist

    // -------- CHECK EXISTENCE --------

    cout << mp.count(1) << endl;   // 1 if exists else 0

    cout << mp.contains(3) << endl; // C++20

    // -------- FIND --------

    auto it = mp.find(3);

    if(it != mp.end())
    {
        cout << it->first << " " << it->second << endl;
    }

    // -------- ITERATION --------

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // Range based loop

    for(auto &p : mp)
    {
        cout << p.first << " " << p.second << endl;
    }

    // -------- REVERSE ITERATION --------

    for(auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        cout << it->first << " ";
    }

    // -------- ERASE --------

    mp.erase(2);                  // erase by key

    mp.erase(mp.find(3));         // erase by iterator

    mp.erase(mp.begin(), mp.find(5));  // erase range

    // -------- SIZE --------

    cout << mp.size() << endl;

    cout << mp.empty() << endl;

    // -------- BOUNDS (because sorted) --------

    mp.lower_bound(3);   // first element >= 3

    mp.upper_bound(3);   // first element > 3

    // -------- CLEAR --------

    mp.clear();
}



/*
========================================================
2. UNORDERED_MAP (Hash Table)
--------------------------------------------------------
Implementation: Hash Table
Keys: Unique
Order: Unordered
Average Time: O(1)
Worst case: O(n)
Most used in LeetCode
========================================================
*/

void UnorderedMapExample()
{
    unordered_map<int,int> mp;

    // -------- INSERTION --------

    mp.insert({1,10});

    mp.emplace(2,20);

    mp[3] = 30;

    mp.insert(make_pair(4,40));

    // -------- ACCESS --------

    cout << mp[1] << endl;

    cout << mp.at(2) << endl;

    // -------- CHECK EXISTENCE --------

    cout << mp.count(1) << endl;

    cout << mp.contains(2) << endl;   // C++20

    // -------- FIND --------

    auto it = mp.find(3);

    if(it != mp.end())
    {
        cout << it->first << " " << it->second << endl;
    }

    // -------- ITERATION --------

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    for(auto &p : mp)
    {
        cout << p.first << " " << p.second << endl;
    }

    // -------- ERASE --------

    mp.erase(1);

    mp.erase(mp.find(2));

    mp.erase(mp.begin());

    // -------- SIZE --------

    cout << mp.size() << endl;

    cout << mp.empty() << endl;

    // -------- HASH TABLE PROPERTIES --------

    cout << mp.bucket_count() << endl;   // total buckets

    cout << mp.bucket(3) << endl;        // bucket index

    cout << mp.bucket_size(3) << endl;   // elements in bucket

    cout << mp.load_factor() << endl;    // load factor

    cout << mp.max_load_factor() << endl;

    mp.max_load_factor(2.0);             // change load factor

    mp.rehash(50);                       // rehash table

    mp.reserve(100);                     // reserve capacity

    // -------- HASH FUNCTION --------

    auto hf = mp.hash_function();

    // -------- CLEAR --------

    mp.clear();
}



/*
========================================================
3. MULTIMAP
--------------------------------------------------------
Allows duplicate keys
Ordered
O(log n)
========================================================
*/

void MultiMapExample()
{
    multimap<int,int> mm;

    mm.insert({1,10});
    mm.insert({1,20});
    mm.insert({1,30});

    mm.insert({2,40});

    // iterate

    for(auto &p : mm)
    {
        cout << p.first << " " << p.second << endl;
    }

    // retrieve duplicates

    auto range = mm.equal_range(1);

    for(auto it = range.first; it != range.second; it++)
    {
        cout << it->second << endl;
    }

    mm.erase(1);
}



/*
========================================================
4. UNORDERED_MULTIMAP
--------------------------------------------------------
Duplicate keys
Hash table
Average O(1)
========================================================
*/

void UnorderedMultiMapExample()
{
    unordered_multimap<int,int> umm;

    umm.insert({1,10});
    umm.insert({1,20});
    umm.insert({1,30});

    for(auto &p : umm)
    {
        cout << p.first << " " << p.second << endl;
    }

    auto range = umm.equal_range(1);

    for(auto it = range.first; it != range.second; it++)
    {
        cout << it->second << endl;
    }

    umm.erase(1);
}



/*
========================================================
5. HASHING PATTERNS USED IN LEETCODE
========================================================
*/

void FrequencyMapExample()
{
    vector<int> nums = {1,2,2,3,3,3};

    unordered_map<int,int> freq;

    // count frequency

    for(int x : nums)
    {
        freq[x]++;
    }

    for(auto &p : freq)
    {
        cout << p.first << " -> " << p.second << endl;
    }
}



void TwoSumExample()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;

    unordered_map<int,int> mp;

    for(int i=0;i<nums.size();i++)
    {
        int need = target - nums[i];

        if(mp.count(need))
        {
            cout << mp[need] << " " << i << endl;
            return;
        }

        mp[nums[i]] = i;
    }
}



void GroupAnagramExample()
{
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    unordered_map<string,vector<string>> mp;

    for(string s : strs)
    {
        string key = s;
        sort(key.begin(), key.end());

        mp[key].push_back(s);
    }

    for(auto &p : mp)
    {
        for(string s : p.second)
            cout << s << " ";

        cout << endl;
    }
}



/*
========================================================
MAIN FUNCTION
========================================================
*/

int main()
{
    MapExample();

    UnorderedMapExample();

    MultiMapExample();

    UnorderedMultiMapExample();

    FrequencyMapExample();

    TwoSumExample();

    GroupAnagramExample();
}