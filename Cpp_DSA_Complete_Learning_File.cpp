/*
===============================================================================
C++ + DSA COMPLETE LEARNING FILE
===============================================================================
Organized from the supplied notes. Nothing useful from the original learning
material has been intentionally removed. Incorrect/unsafe statements and code
have been corrected, and related extra explanations/examples have been added.

HOW TO USE
----------
1. Save/compile with C++20 (C++17 also works if you replace map/set .contains()
   with .find() != .end()).
2. This is ONE source file and has ONE main().
3. Each topic is demonstrated in a separate function.
4. Change main() to call the demo you want to practise.

Compile:
    g++ -std=c++20 -O2 -Wall -Wextra -pedantic Cpp_DSA_Complete_Learning_File.cpp -o learning
Run:
    ./learning
===============================================================================
*/

#include <bits/stdc++.h>
using namespace std;

// =============================================================================
// 00. C++ INTRODUCTION, DATA TYPES, INPUT/OUTPUT, SIZE, TYPE CONVERSION
// =============================================================================
//
// C++ is a general-purpose, compiled programming language.
// It is used to instruct computers/hardware through programs.
//
// Common reasons to learn/use C++:
// - High performance and fast programs
// - Procedural programming and Object-Oriented Programming (OOP)
// - Low-level/system-level control compared with many high-level languages
// - Explicit memory and resource management
// - Competitive programming and DSA
//
// Basic data types:
//   bool, char, int, float, double, long long, long double, string
//
// Common literals:
//   10       -> int
//   10.5F    -> float
//   10.5     -> double
//   10LL     -> long long
//   10.5L    -> long double
//   'A'      -> char
//   "Hello"  -> string literal
//
// sizeof(type/object) returns size in bytes. Exact sizes are implementation-
// dependent, except the language guarantees minimum ranges and relationships.
// sizeof(double) is commonly 8; sizeof(long double) varies by compiler/platform.
//
// Type conversion:
//   float(x) / static_cast<float>(x) converts x to float
//   int(y)   / static_cast<int>(y) converts y to int (fraction is truncated)
//
// NOTE: "256 characters" is not universally true for every character encoding.
// A byte has 256 possible values when it is 8 bits; C++ char is at least
// 8 bits. ASCII uses 128 code points; extended encodings differ.

void demoDataTypesAndIO() {
    int a = 0;
    float b = 10.5F;
    char c = 'A';
    double d = 10.5;
    long long e = 10000000000LL;
    long double f = 10.5L;

    cout << "Hello World\n";
    cout << "Enter an integer: ";
    cin >> a;
    cout << "You entered: " << a << '\n';

    cout << "sizeof(double): " << sizeof(d) << '\n';
    cout << "sizeof(10.09L): " << sizeof(10.09L) << '\n';

    int x = 10;
    cout << "float(x): " << static_cast<float>(x) << '\n';
    float y = 20.8F;
    cout << "int(y): " << static_cast<int>(y) << '\n';

    // These variables are intentionally shown to teach the data types.
    cout << "float=" << b << ", char=" << c
         << ", long long=" << e << ", long double=" << f << '\n';
}

// =============================================================================
// 01. STRING INPUT, GETLINE, SWITCH, BASIC ARRAYS
// =============================================================================
//
// cin >> name reads until whitespace.
// getline(cin, name) reads the whole line including spaces.
//
// If getline follows operator>>, consume the leftover newline first:
//   cin.ignore(numeric_limits<streamsize>::max(), '\\n');
//
// switch compares one expression against constant case labels.
// Each case normally uses break to avoid fall-through.
//
// Arrays:
//   int arr[10];       -> one-dimensional array
//   int arr2[10][20];  -> two-dimensional array
// Array indices start at 0. Valid arr[10] indices are 0..9.
// Prefer vector when the size is known only at runtime.

void demoInputSwitchArrays() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your name is " << name << '\n';

    cout << "Enter a number from 1 to 7: ";
    int day = 0;
    cin >> day;

    switch (day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
        default: cout << "Invalid day number\n"; break;
    }

    cout << "Enter six integers: ";
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << "Sum: " << (a + b + c + d + e + f) << '\n';

    int arr[10]{};       // 1D array, initialized to zero
    int arr2[10][20]{};  // 2D array

    string s2 = "Shrinidhi";
    int len = static_cast<int>(s2.size());
    if (len > 0) {
        cout << "Last character: " << s2[len - 1] << '\n';
    }
}

// =============================================================================
// 02. STRINGS: OPERATIONS AND STL ALGORITHMS
// =============================================================================
//
// Common string methods:
//   s.size(), s.length(), s.empty(), s.capacity()
//   s[i], s.at(i), s.front(), s.back()
//   s.append(...), s += ...
//   s.push_back(char), s.pop_back()
//   s.substr(start, length)
//   s.find(value), s.rfind(value)
//   s.insert(index, text), s.erase(index, count)
//   s.replace(index, count, text)
//
// find/rfind return string::npos when not found.
// at() checks bounds and throws; operator[] does not perform bounds checking.
// capacity() is implementation-dependent and is not the string's length.
//
// Algorithms:
//   reverse(begin, end), sort(begin, end), count(begin, end, value)
//   remove(begin, end, value) moves matching items to the end; erase the
//   returned range to actually shrink the string/container.

void demoStrings() {
    string s1 = "Hello";
    string s2 = "World";
    string s3 = s1 + " " + s2;
    cout << s3 << '\n';                       // Hello World

    string s4 = s3.substr(0, 5);
    cout << s4 << '\n';                       // Hello
    string s5 = s3.substr(6);
    cout << s5 << '\n';                       // World

    string s6 = s3;                           // copy
    s6[0] = 'h';
    cout << s6 << '\n';                       // hello World

    string s7(5, 'a');
    cout << s7 << '\n';                       // aaaaa

    s1.append(" C++");
    cout << s1 << '\n';                       // Hello C++
    cout << s1.size() << '\n';                // 9
    cout << s1.length() << '\n';              // 9
    cout << s1.empty() << '\n';               // 0 (false)
    cout << s1.capacity() << '\n';            // varies
    cout << s1[0] << '\n';
    cout << s1.at(0) << '\n';
    cout << s1.find("C++") << '\n';           // 6
    s1.replace(6, 3, "Java");
    cout << s1 << '\n';                       // Hello Java
    cout << s1.front() << '\n';               // H
    cout << s1.back() << '\n';                // a

    s1 += "abc";                              // append
    s1.append("xyz");                         // append
    s1.push_back('a');                        // add char
    s1.pop_back();                            // remove last char
    s1.insert(2, "abc");                      // insert at index
    s1.erase(2, 3);                            // erase 3 chars
    s1.replace(2, 3, "xyz");                  // replace 3 chars

    cout << s1.find("abc") << '\n';           // npos if absent
    cout << s1.rfind("abc") << '\n';
    cout << s1.find('a') << '\n';

    string work = "banana";
    reverse(work.begin(), work.end());
    cout << work << '\n';                     // ananab
    sort(work.begin(), work.end());
    cout << work << '\n';                     // aaabnn
    cout << count(work.begin(), work.end(), 'a') << '\n'; // 3

    work.erase(remove(work.begin(), work.end(), 'a'), work.end());
    cout << work << '\n';                     // bnn
}

// =============================================================================
// 03. POINTERS
// =============================================================================
//
// &variable : address-of operator
// *pointer  : dereference operator (value stored at that address)
//
// int* p = &a;       p stores address of a
// int** q = &p;      q stores address of pointer p
//
// p -> a, q -> p -> a
// *p is a; **q is a.
//
// A pointer must point to a valid object before dereferencing.
// nullptr represents "points to no object"; never dereference nullptr.

void demoPointers() {
    int a = 10;
    int* p = &a;
    int** q = &p;

    cout << "p (address of a): " << p << '\n';
    cout << "*p (value of a): " << *p << '\n';
    cout << "&p (address of pointer p): " << &p << '\n';
    cout << "a: " << a << '\n';
    cout << "&a: " << &a << '\n';
    cout << "*(&p): " << *(&p) << '\n';
    cout << "*(&a): " << *(&a) << '\n';
    cout << "q: " << q << '\n';
    cout << "*q (p): " << *q << '\n';
    cout << "**q (a): " << **q << '\n';

    int b = 20;
    int* ptr = &b;
    cout << "*ptr: " << *ptr << '\n';
}

// =============================================================================
// 04. ARRAYS, PRECOMPUTATION AND HASHING
// =============================================================================
//
// Hashing/frequency counting:
// 1. Precompute the frequency of every value.
// 2. Answer each query by looking up the stored frequency.
//
// For a bounded integer domain, a vector/array hash is simple.
// For arbitrary/negative/large values, use unordered_map.
//
// IMPORTANT correction:
//   int hash[10] is valid only for keys 0..9.
//   Accessing hash[arr[i]] when arr[i] is outside 0..9 is out-of-bounds
//   (undefined behaviour). Use unordered_map or coordinate compression.
//
// Character hashing:
//   lowercase English letters: index = c - 'a', array size 26.
//   For all byte values, use unsigned char and array<int, 256>.
//   Do not index a 26-array with uppercase, punctuation, or non-ASCII bytes.

void demoIntegerFrequencyHashing() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 8, 1};

    // Safe for arbitrary integers (including negative values).
    unordered_map<int, int> frequency;
    for (int value : arr) {
        frequency[value]++;
    }

    int queries[] = {1, 2, 3, 8, 99};
    for (int query : queries) {
        cout << query << " occurs "
             << (frequency.contains(query) ? frequency.at(query) : 0)
             << " time(s)\n";
    }

    // Fixed-array example, with explicit range validation:
    vector<int> small = {0, 2, 2, 5, 9};
    array<int, 10> hash{};
    for (int value : small) {
        if (value >= 0 && value < static_cast<int>(hash.size())) {
            hash[value]++;
        }
    }
    cout << "Frequency of 2 in fixed hash: " << hash[2] << '\n';
}

void demoCharacterFrequencyHashing() {
    string s = "abacaf";

    array<int, 26> lowercaseHash{};
    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') {
            lowercaseHash[ch - 'a']++;
        }
    }

    cout << "Frequency of 'a': " << lowercaseHash['a' - 'a'] << '\n';
    cout << "Frequency of 'f': " << lowercaseHash['f' - 'a'] << '\n';

    // General byte hashing: cast to unsigned char before indexing.
    array<int, 256> byteHash{};
    for (unsigned char ch : s) {
        byteHash[ch]++;
    }
    cout << "Byte frequency for 'a': "
         << byteHash[static_cast<unsigned char>('a')] << '\n';
}

// =============================================================================
// 05. MAP / UNORDERED_MAP / MULTIMAP / UNORDERED_MULTIMAP
// =============================================================================
//
// map:
//   Ordered keys, unique keys, usually Red-Black Tree.
//   insert/find/erase: O(log n)
//
// unordered_map:
//   Hash table, unique keys, no sorted order.
//   Average insert/find/erase O(1), worst case O(n)
//
// multimap / unordered_multimap:
//   Allow duplicate keys; use equal_range() to retrieve all values.
//
// map[key] inserts a default value if key does not exist.
// map.at(key) throws if key does not exist.
// C++20 contains(key) returns bool.

void demoMap() {
    map<int, int> mp;

    mp.insert({1, 10});
    mp.insert(pair<int, int>(2, 20));
    mp.insert(make_pair(3, 30));
    mp.emplace(4, 40);
    mp[5] = 50;

    cout << mp[1] << '\n';
    cout << mp.at(2) << '\n';
    cout << mp.count(1) << '\n';
    cout << mp.contains(3) << '\n';

    auto it = mp.find(3);
    if (it != mp.end()) {
        cout << it->first << ' ' << it->second << '\n';
    }

    for (auto iter = mp.begin(); iter != mp.end(); ++iter) {
        cout << iter->first << ' ' << iter->second << '\n';
    }
    for (const auto& pair : mp) {
        cout << pair.first << ' ' << pair.second << '\n';
    }

    for (auto iter = mp.rbegin(); iter != mp.rend(); ++iter) {
        cout << iter->first << ' ';
    }
    cout << '\n';

    mp.erase(2);
    auto found = mp.find(3);
    if (found != mp.end()) mp.erase(found);

    // Erase keys strictly before 5; find(5) is the end of the range.
    mp.erase(mp.begin(), mp.lower_bound(5));

    cout << mp.size() << '\n';
    cout << mp.empty() << '\n';
    auto lower = mp.lower_bound(3); // first key >= 3
    if (lower != mp.end()) cout << lower->first << " " << lower->second << '\n';
    auto upper = mp.upper_bound(3); // first key > 3
    if (upper != mp.end()) cout << upper->first << " " << upper->second << '\n';
    mp.clear();
}

void demoUnorderedMap() {
    unordered_map<int, int> mp;

    mp.insert({1, 10});
    mp.emplace(2, 20);
    mp[3] = 30;
    mp.insert(make_pair(4, 40));

    cout << mp[1] << '\n';
    cout << mp.at(2) << '\n';
    cout << mp.count(1) << '\n';
    cout << mp.contains(2) << '\n';

    auto it = mp.find(3);
    if (it != mp.end()) cout << it->first << ' ' << it->second << '\n';

    for (auto iter = mp.begin(); iter != mp.end(); ++iter)
        cout << iter->first << ' ' << iter->second << '\n';

    for (const auto& pair : mp)
        cout << pair.first << ' ' << pair.second << '\n';

    mp.erase(1);
    auto found = mp.find(2);
    if (found != mp.end()) mp.erase(found);
    if (!mp.empty()) mp.erase(mp.begin());

    cout << mp.size() << '\n';
    cout << mp.empty() << '\n';

    cout << mp.bucket_count() << '\n';
    cout << mp.load_factor() << '\n';
    cout << mp.max_load_factor() << '\n';
    mp.max_load_factor(2.0F);
    mp.rehash(50);
    mp.reserve(100);

    auto hashFunction = mp.hash_function();
    (void)hashFunction;
    mp.clear();
}

void demoMultiMap() {
    multimap<int, int> mm;
    mm.insert({1, 10});
    mm.insert({1, 20});
    mm.insert({1, 30});
    mm.insert({2, 40});

    for (const auto& pair : mm)
        cout << pair.first << ' ' << pair.second << '\n';

    auto range = mm.equal_range(1);
    for (auto it = range.first; it != range.second; ++it)
        cout << it->second << '\n';

    mm.erase(1); // removes every entry with key 1
}

void demoUnorderedMultiMap() {
    unordered_multimap<int, int> umm;
    umm.insert({1, 10});
    umm.insert({1, 20});
    umm.insert({1, 30});

    for (const auto& pair : umm)
        cout << pair.first << ' ' << pair.second << '\n';

    auto range = umm.equal_range(1);
    for (auto it = range.first; it != range.second; ++it)
        cout << it->second << '\n';

    umm.erase(1);
}

// =============================================================================
// 06. COMMON HASHING / LEETCODE PATTERNS
// =============================================================================

void frequencyMapPattern() {
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    unordered_map<int, int> freq;

    for (int x : nums) freq[x]++;

    for (const auto& pair : freq)
        cout << pair.first << " -> " << pair.second << '\n';
}

// Two Sum: store previously seen value -> index.
// Time average O(n), space O(n).
void twoSumPattern() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    unordered_map<int, int> indexByValue;

    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        int needed = target - nums[i];

        auto it = indexByValue.find(needed);
        if (it != indexByValue.end()) {
            cout << it->second << ' ' << i << '\n';
            return;
        }
        indexByValue[nums[i]] = i;
    }
    cout << "No pair found\n";
}

// Group Anagrams: sorted string is the common key.
void groupAnagramPattern() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<string, vector<string>> groups;

    for (const string& word : strs) {
        string key = word;
        sort(key.begin(), key.end());
        groups[key].push_back(word);
    }

    for (const auto& group : groups) {
        for (const string& word : group.second) cout << word << ' ';
        cout << '\n';
    }
}

// =============================================================================
// 07. SET / MULTISET / UNORDERED_SET
// =============================================================================
//
// set:
//   unique, sorted, usually Red-Black Tree, O(log n)
//
// multiset:
//   sorted, duplicates allowed, O(log n)
//
// unordered_set:
//   unique, no sorted order, average O(1), worst O(n)
//
// set has no operator[] and no direct front()/back().
// Use *begin() for smallest and *rbegin() for largest, when non-empty.
// Erasing multiset by key removes ALL occurrences; erase(iterator) removes one.

void demoSet() {
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10); // duplicate ignored

    cout << s.size() << '\n';
    cout << s.empty() << '\n';

    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
        cout << *it << ' ';
    cout << '\n';

    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << ' ';
    cout << '\n';

    for (int x : s) cout << x << ' ';
    cout << '\n';

    auto it = s.find(20);
    cout << (it != s.end() ? "Found\n" : "Not found\n");

    cout << s.count(10) << '\n';
    cout << s.count(99) << '\n';

    s.erase(20);
    auto it2 = s.find(30);
    if (it2 != s.end()) s.erase(it2);
    s.erase(s.begin(), s.end());

    set<int> s2 = {10, 20, 30, 40, 50};
    auto lb = s2.lower_bound(25);
    if (lb != s2.end()) cout << *lb << '\n'; // 30

    auto ub = s2.upper_bound(30);
    if (ub != s2.end()) cout << *ub << '\n'; // 40

    cout << *s2.begin() << '\n';  // smallest
    cout << *s2.rbegin() << '\n'; // largest
    s2.clear();
}

void demoMultiset() {
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);

    for (int x : ms) cout << x << ' ';
    cout << '\n';

    cout << ms.count(10) << '\n';

    auto f = ms.find(10);
    if (f != ms.end()) cout << "Found\n";

    ms.erase(10); // removes all 10s
    auto itr = ms.find(20);
    if (itr != ms.end()) ms.erase(itr); // removes one occurrence
}

void demoUnorderedSet() {
    unordered_set<int> us;
    us.insert(5);
    us.insert(10);
    us.insert(15);
    us.insert(5); // ignored

    cout << us.size() << '\n';
    for (int x : us) cout << x << ' ';
    cout << '\n';

    auto f = us.find(10);
    if (f != us.end()) cout << "Found\n";

    cout << us.count(10) << '\n';
    cout << us.count(100) << '\n';

    us.erase(10);
    auto it = us.find(15);
    if (it != us.end()) us.erase(it);
    us.clear();

    unordered_set<int> hs = {10, 20, 30, 40};
    cout << hs.bucket_count() << '\n';
    cout << hs.load_factor() << '\n';
    cout << hs.max_load_factor() << '\n';
    cout << hs.bucket(20) << '\n'; // bucket containing key 20
}

// =============================================================================
// 08. ITERATORS AND STL ALGORITHMS
// =============================================================================
//
// begin()/end(): forward range [begin, end), end is one past last.
// rbegin()/rend(): reverse iteration.
// advance(iterator, k): move iterator k positions.
// For set, iterators are bidirectional, not random access: do not use it + k.
//
// sort, reverse, count, remove are algorithms in <algorithm>.
// remove does not physically shrink a vector/string; use erase-remove idiom.

void demoIteratorsAndAlgorithms() {
    set<int> st = {1, 2, 3, 4, 5};

    for (auto it = st.begin(); it != st.end(); ++it) cout << *it << ' ';
    cout << '\n';

    for (auto it = st.rbegin(); it != st.rend(); ++it) cout << *it << ' ';
    cout << '\n';

    auto it = st.begin();
    advance(it, 2);
    cout << *it << '\n'; // 3

    vector<int> nums = {1, 2, 2, 3, 3, 4};
    set<int> uniqueValues(nums.begin(), nums.end());
    for (int x : uniqueValues) cout << x << ' ';
    cout << '\n';

    unordered_set<int> seen;
    for (int x : nums) {
        if (seen.contains(x)) cout << "Duplicate: " << x << '\n';
        seen.insert(x);
    }

    set<int> sortedValues = {10, 20, 30, 40};
    auto kth = sortedValues.begin();
    advance(kth, 2); // zero-based index 2 -> third smallest
    if (kth != sortedValues.end()) cout << *kth << '\n';

    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {3, 4, 5};
    unordered_set<int> aSet(a.begin(), a.end());
    for (int x : b) {
        if (aSet.contains(x)) cout << x << ' ';
    }
    cout << '\n';
}

// =============================================================================
// 09. DYNAMIC PROGRAMMING (DP) - CORE THINKING
// =============================================================================
//
// General problem-solving approach:
// 1. Represent the problem using an index/state.
// 2. Do all possible choices/actions at that state.
// 3. Combine the choices according to the question:
//      - Sum/count all choices -> count the number of ways.
//      - Minimum of choices -> minimum cost/energy.
//      - Maximum of choices -> maximum score/profit.
// 4. Express the problem recursively.
// 5. Identify base cases.
// 6. Memoization: recursion + cache (top-down).
// 7. Tabulation: iterative table (bottom-up).
// 8. Space optimization: keep only states that are still needed.
//
// DP is useful when:
// - The problem has overlapping subproblems.
// - The problem has optimal substructure.
// - It asks for number of ways, minimum/maximum, or all possible choices
//   that can be represented as states.
//
// DP does not automatically guarantee an optimal solution for every problem;
// a correct state and recurrence are required.
//
// Memoization:
//   Start from the main state, recurse toward base cases, cache each result.
//   Typical steps:
//   1) Create dp array initialized to an "uncomputed" marker.
//   2) If dp[state] is computed, return it.
//   3) Compute from smaller states, store and return.
//
// Tabulation:
//   Start from base cases and fill toward the target state.
//
// Complexity notes:
//   Fibonacci with memoization: O(n) time, O(n) dp + O(n) recursion stack.
//   Fibonacci tabulation: O(n) time, O(n) dp array.
//   Fibonacci optimized: O(n) time, O(1) extra space.
//
// Stairs problem:
//   At stair 0, reach stair n by taking 1 or 2 steps.
//   Number of ways: ways(n) = ways(n-1) + ways(n-2).
//   Base: ways(0)=1 (one way: already there), ways(1)=1.
//   This is Fibonacci-like, but the stair-count indexing differs from fib(0)=0.

long long climbStairsMemo(int n, vector<long long>& dp) {
    if (n == 0 || n == 1) return 1;
    if (dp[n] != -1) return dp[n];
    return dp[n] = climbStairsMemo(n - 1, dp) + climbStairsMemo(n - 2, dp);
}

long long climbStairsTabulation(int n) {
    if (n <= 1) return 1;
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

long long climbStairsSpaceOptimized(int n) {
    if (n <= 1) return 1;
    long long prev2 = 1; // ways(0)
    long long prev = 1;  // ways(1)
    for (int i = 2; i <= n; ++i) {
        long long current = prev2 + prev;
        prev2 = prev;
        prev = current;
    }
    return prev;
}

// =============================================================================
// 10. FIBONACCI: RECURSION, MEMOIZATION, TABULATION, SPACE OPTIMIZATION
// =============================================================================
//
// Fibonacci definition:
//   fib(0)=0, fib(1)=1
//   fib(n)=fib(n-1)+fib(n-2)
//
// Plain recursion repeats work and takes exponential time O(2^n).
// Memoization/tabulation reduces it to O(n) time.
// Use long long for a larger range; even long long overflows after fib(92).

long long fibonacciRecursion(int n) {
    if (n == 0 || n == 1) return n;
    return fibonacciRecursion(n - 2) + fibonacciRecursion(n - 1);
}

long long fibonacciMemo(int n, vector<long long>& dp) {
    if (n == 0 || n == 1) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fibonacciMemo(n - 1, dp) + fibonacciMemo(n - 2, dp);
}

long long fibonacciTabulation(int n) {
    if (n <= 1) return n;
    vector<long long> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];
}

long long fibonacciSpaceOptimized(int n) {
    if (n <= 1) return n;
    long long prev2 = 0;
    long long prev = 1;
    for (int i = 2; i <= n; ++i) {
        long long current = prev2 + prev;
        prev2 = prev;
        prev = current;
    }
    return prev;
}

void demoFibonacci() {
    int n = 10;
    cout << "Fibonacci recursion: ";
    for (int i = 0; i < n; ++i) cout << fibonacciRecursion(i) << ' ';
    cout << '\n';

    vector<long long> dp(n + 1, -1);
    cout << "Fibonacci memoization: ";
    for (int i = 0; i < n; ++i) cout << fibonacciMemo(i, dp) << ' ';
    cout << '\n';

    cout << "Fibonacci tabulation fib(" << n << "): "
         << fibonacciTabulation(n) << '\n';
    cout << "Fibonacci optimized fib(" << n << "): "
         << fibonacciSpaceOptimized(n) << '\n';
}

// =============================================================================
// 11. FROG JUMP (1 OR 2 STEPS) - MINIMUM ENERGY
// =============================================================================
//
// Given heights[] and start at index 0, reach index n-1.
// Jump from i to j costs abs(height[i] - height[j]).
// Frog can jump 1 or 2 indices.
// Recurrence:
//   dp[i] = min(dp[i-1] + abs(h[i]-h[i-1]),
//               dp[i-2] + abs(h[i]-h[i-2])) when i >= 2
// Base: dp[0]=0.
// Greedy is not generally correct because a locally cheapest jump can lead
// to a globally expensive path.
//
// Memoization: O(n) time, O(n) cache + O(n) recursion stack.
// Tabulation: O(n) time, O(n) dp.
// Space optimized: O(n) time, O(1) extra space.

int frogJumpMemo(int index, const vector<int>& height, vector<int>& dp) {
    if (index == 0) return 0;
    if (dp[index] != -1) return dp[index];

    int jumpOne = frogJumpMemo(index - 1, height, dp)
                + abs(height[index] - height[index - 1]);

    int jumpTwo = INT_MAX;
    if (index > 1) {
        jumpTwo = frogJumpMemo(index - 2, height, dp)
                + abs(height[index] - height[index - 2]);
    }
    return dp[index] = min(jumpOne, jumpTwo);
}

int frogJumpTabulation(const vector<int>& height) {
    int n = static_cast<int>(height.size());
    if (n <= 1) return 0;

    vector<int> dp(n, 0);
    for (int index = 1; index < n; ++index) {
        int jumpOne = dp[index - 1]
                    + abs(height[index] - height[index - 1]);
        int jumpTwo = INT_MAX;
        if (index > 1) {
            jumpTwo = dp[index - 2]
                    + abs(height[index] - height[index - 2]);
        }
        dp[index] = min(jumpOne, jumpTwo);
    }
    return dp[n - 1];
}

int frogJumpSpaceOptimized(const vector<int>& height) {
    int n = static_cast<int>(height.size());
    if (n <= 1) return 0;

    int prev = 0;  // dp[i-1]
    int prev2 = 0; // dp[i-2]
    for (int i = 1; i < n; ++i) {
        int jumpOne = prev + abs(height[i] - height[i - 1]);
        int jumpTwo = INT_MAX;
        if (i > 1) {
            jumpTwo = prev2 + abs(height[i] - height[i - 2]);
        }
        int current = min(jumpOne, jumpTwo);
        prev2 = prev;
        prev = current;
    }
    return prev;
}

void demoFrogJump() {
    vector<int> height = {30, 10, 60, 10, 60, 50};
    int n = static_cast<int>(height.size());

    vector<int> dp(n, -1);
    cout << "Frog memoization: " << frogJumpMemo(n - 1, height, dp) << '\n';
    cout << "Frog tabulation: " << frogJumpTabulation(height) << '\n';
    cout << "Frog optimized: " << frogJumpSpaceOptimized(height) << '\n';
}

// =============================================================================
// 12. FROG JUMP WITH K DISTANCE
// =============================================================================
//
// Follow-up: frog can jump 1, 2, ..., K indices each time.
// For every i, try every valid jump j in [1, K] where i-j >= 0:
//   dp[i] = min(dp[i-j] + abs(height[i]-height[i-j]))
// Base: dp[0]=0.
// Time: O(n*k); space: O(n), or O(k) only with a carefully maintained window
// (the simple general implementation below uses O(n)).

int frogJumpKTabulation(const vector<int>& height, int k) {
    int n = static_cast<int>(height.size());
    if (n <= 1) return 0;
    if (k <= 0) return INT_MAX; // invalid jump configuration

    vector<int> dp(n, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i < n; ++i) {
        for (int jump = 1; jump <= k && i - jump >= 0; ++jump) {
            int candidate = dp[i - jump]
                          + abs(height[i] - height[i - jump]);
            dp[i] = min(dp[i], candidate);
        }
    }
    return dp[n - 1];
}

void demoFrogJumpK() {
    vector<int> height = {30, 10, 60, 10, 60, 50};
    int k = 4;
    cout << "Frog K jump (K=" << k << "): "
         << frogJumpKTabulation(height, k) << '\n';
}

// =============================================================================
// 13. QUICK COMPLEXITY REFERENCE
// =============================================================================
//
// Operation / structure                 Typical complexity
// vector access by index                O(1)
// vector push_back                      amortized O(1)
// vector insertion/erase middle         O(n)
// list insert/erase at known iterator  O(1), searching O(n)
// map / set insert-find-erase           O(log n)
// unordered_map / unordered_set         average O(1), worst O(n)
// sort(vector)                          O(n log n)
// reverse/count                         O(n)
// Two Sum with hash map                 average O(n)
// Fibonacci plain recursion             O(2^n) time
// Fibonacci DP                          O(n) time
// Frog 1/2 jump                         O(n) time
// Frog K jump                           O(n*k) time
//
// Space:
// vector/list/map/hash structures use memory for stored elements.
// Memoization commonly uses dp array + recursive call stack.
// Space-optimized Fibonacci/Frog 1-or-2 uses O(1) auxiliary space.

// =============================================================================
// 14. MAIN - RUN THE DEMONSTRATIONS
// =============================================================================
//
// Input demos are not called automatically so the file can run without waiting
// for input. Uncomment the demo you want to practise.
// The examples below run safe, non-interactive demonstrations.

int main() {
    cout << "===== C++ DSA COMPLETE LEARNING FILE =====\n";

    // Uncomment when practising console input:
    // demoDataTypesAndIO();
    // demoInputSwitchArrays();

    demoStrings();
    demoPointers();

    demoIntegerFrequencyHashing();
    demoCharacterFrequencyHashing();

    demoMap();
    demoUnorderedMap();
    demoMultiMap();
    demoUnorderedMultiMap();

    frequencyMapPattern();
    twoSumPattern();
    groupAnagramPattern();

    demoSet();
    demoMultiset();
    demoUnorderedSet();
    demoIteratorsAndAlgorithms();

    demoFibonacci();
    demoFrogJump();
    demoFrogJumpK();

    cout << "===== DEMOS FINISHED =====\n";
    return 0;
}

/*
===============================================================================
IMPORTANT FIXES MADE TO THE ORIGINAL NOTES
===============================================================================
1. Kept one main() only; each original independent program became a function.
2. Corrected integer hash array out-of-bounds risk. A 10-element array only
   supports indices 0..9; arbitrary input uses unordered_map.
3. Corrected lowercase character hashing with range checks; provided 256-byte
   hashing with unsigned char.
4. Corrected wrong map iterator output: *iterator is a pair, not a key.
   Use iterator->first / iterator->second.
5. Corrected lower_bound/upper_bound output: they return iterators; dereference
   only after checking against end().
6. Corrected Fibonacci memoization output and added separate recursion,
   memoization, tabulation, and O(1)-space implementations.
7. Corrected stair-count base cases: ways(0)=1, ways(1)=1.
8. Corrected Frog Jump edge cases (n==0/n==1) and preserved INT_MAX logic.
9. Added the actual K-distance Frog Jump recurrence and implementation.
10. Explained that remove() alone does not shrink a container; use erase-remove.
11. Corrected capacity/size assumptions and clarified platform-dependent sizes.
12. Added complexity summaries and practical safety notes.
===============================================================================
*/
