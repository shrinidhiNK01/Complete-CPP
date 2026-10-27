# STL, Templates, and Generic Programming

## 1. What Is STL?

STL means Standard Template Library. In modern wording, it is part of the C++ Standard Library.

It gives reusable:

- Containers
- Iterators
- Algorithms
- Function objects

Mental model:

```text
Containers store data.
Iterators point/traverse data.
Algorithms operate on data.
Functors/lambdas customize behavior.
```

## 2. Why STL Matters

Instead of manually writing arrays, sorting, searching, stacks, queues, maps, and lists, use STL.

Benefits:

- Fast
- Tested
- Generic
- Standard
- Cleaner code

## 3. vector

`std::vector` is dynamic array.

```cpp
#include <vector>

std::vector<int> nums = {1, 2, 3};
nums.push_back(4);
std::cout << nums[0];
```

Use vector when:

- You need resizable array
- Fast indexing
- Cache-friendly storage

Common functions:

```cpp
v.size();
v.empty();
v.push_back(x);
v.pop_back();
v.clear();
v.front();
v.back();
```

## 4. list

`std::list` is doubly linked list.

```cpp
std::list<int> values = {1, 2, 3};
values.push_front(0);
values.push_back(4);
```

Use rarely. Vector is usually better unless frequent insertion/removal in middle with known iterator is important.

## 5. deque

Double-ended queue.

```cpp
std::deque<int> d;
d.push_front(1);
d.push_back(2);
```

Good when you need fast push/pop at both ends.

## 6. stack

LIFO: last in, first out.

```cpp
std::stack<int> st;
st.push(10);
st.push(20);
std::cout << st.top();
st.pop();
```

## 7. queue

FIFO: first in, first out.

```cpp
std::queue<int> q;
q.push(10);
q.push(20);
std::cout << q.front();
q.pop();
```

## 8. priority_queue

Heap-like container adapter.

```cpp
std::priority_queue<int> pq;
pq.push(5);
pq.push(10);
std::cout << pq.top(); // 10
```

Min heap:

```cpp
std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
```

## 9. set

Stores unique sorted values.

```cpp
std::set<int> s;
s.insert(10);
s.insert(10);
std::cout << s.size(); // 1
```

## 10. unordered_set

Hash-based unique values.

```cpp
std::unordered_set<int> s;
```

Usually average O(1) lookup.

## 11. map

Key-value pairs sorted by key.

```cpp
std::map<std::string, int> age;
age["Nidhi"] = 21;
```

## 12. unordered_map

Hash-based key-value map.

```cpp
std::unordered_map<std::string, int> count;
count["apple"]++;
```

## 13. pair and tuple

```cpp
std::pair<int, std::string> p{1, "one"};
```

```cpp
std::tuple<int, std::string, double> t{1, "x", 2.5};
```

## 14. Iterators

Iterator acts like a pointer into a container.

```cpp
std::vector<int> v = {1, 2, 3};

for (auto it = v.begin(); it != v.end(); ++it) {
    std::cout << *it << "\n";
}
```

Range-for is simpler:

```cpp
for (int x : v) {
    std::cout << x << "\n";
}
```

## 15. Algorithms

Header:

```cpp
#include <algorithm>
```

Sort:

```cpp
std::sort(v.begin(), v.end());
```

Reverse:

```cpp
std::reverse(v.begin(), v.end());
```

Find:

```cpp
auto it = std::find(v.begin(), v.end(), 5);
```

Count:

```cpp
int c = std::count(v.begin(), v.end(), 5);
```

Binary search:

```cpp
bool ok = std::binary_search(v.begin(), v.end(), 5);
```

## 16. Lambdas

Lambda is an anonymous function.

```cpp
auto add = [](int a, int b) {
    return a + b;
};
```

Sort custom:

```cpp
std::sort(v.begin(), v.end(), [](int a, int b) {
    return a > b;
});
```

## 17. Functors

Functor is an object that behaves like a function.

```cpp
class Greater {
public:
    bool operator()(int a, int b) const {
        return a > b;
    }
};

std::sort(v.begin(), v.end(), Greater{});
```

## 18. Templates

Templates allow generic code.

Function template:

```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}
```

Use:

```cpp
std::cout << add<int>(2, 3);
std::cout << add<double>(2.5, 3.5);
```

## 19. Class Template

```cpp
template <typename T>
class Box {
private:
    T value;

public:
    Box(T v) : value(v) {}
    T get() const { return value; }
};
```

Use:

```cpp
Box<int> intBox(10);
Box<std::string> strBox("hello");
```

## 20. Multiple Template Parameters

```cpp
template <typename K, typename V>
class Pair {
    K key;
    V value;
};
```

## 21. Default Template Parameters

```cpp
template <typename T = int>
class Number {
    T value;
};
```

## 22. Template Specialization

Special behavior for a specific type.

```cpp
template <typename T>
class Printer {
public:
    void print(T value) {
        std::cout << value;
    }
};

template <>
class Printer<bool> {
public:
    void print(bool value) {
        std::cout << (value ? "true" : "false");
    }
};
```

## 23. Concepts

Concepts constrain templates.

```cpp
#include <concepts>

template <std::integral T>
T add(T a, T b) {
    return a + b;
}
```

Concepts make template errors clearer.

## 24. STL Interview Summary

```text
STL provides generic containers, iterators, algorithms, and function objects. vector is the most commonly used sequence container, map/set store sorted data, unordered_map/unordered_set use hashing, and algorithms like sort/find/count operate through iterators. Templates allow writing generic code that works with many types.
```
