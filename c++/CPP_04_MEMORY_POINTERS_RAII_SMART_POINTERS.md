# Memory, Pointers, References, RAII, Smart Pointers

## 1. Why Memory Matters in C++

C++ gives direct control over memory. This is powerful but risky.

Memory mistakes can cause:

- Crashes
- Memory leaks
- Undefined behavior
- Security bugs
- Double deletion
- Dangling pointers

Modern C++ reduces risk with RAII, containers, and smart pointers.

## 2. Stack and Heap

### Stack

Automatic memory.

```cpp
int x = 10;
```

`x` is destroyed automatically when scope ends.

### Heap

Dynamic memory.

```cpp
int* p = new int(10);
delete p;
```

You must release raw heap memory manually if using `new`.

Modern C++ prefers smart pointers and containers instead of raw owning pointers.

## 3. References

A reference is another name for an existing variable.

```cpp
int x = 10;
int& ref = x;
ref = 20;
std::cout << x; // 20
```

Reference must be initialized.

Use references for function parameters:

```cpp
void increment(int& value) {
    value++;
}
```

## 4. Pointers

A pointer stores address of another variable.

```cpp
int x = 10;
int* p = &x;

std::cout << p;  // address
std::cout << *p; // value at address
```

`&` gives address.

`*` dereferences pointer.

## 5. Null Pointer

Use `nullptr`, not `NULL`.

```cpp
int* p = nullptr;
```

Always check nullable pointers before dereferencing.

```cpp
if (p != nullptr) {
    std::cout << *p;
}
```

## 6. Pointer Arithmetic

Arrays and pointers are related.

```cpp
int arr[] = {10, 20, 30};
int* p = arr;

std::cout << *p;       // 10
std::cout << *(p + 1); // 20
```

Pointer arithmetic moves by element size, not byte count.

Use carefully. Prefer containers and iterators in modern C++.

## 7. Dynamic Memory with new/delete

Single object:

```cpp
int* p = new int(42);
delete p;
```

Array:

```cpp
int* arr = new int[5];
delete[] arr;
```

Mistakes:

- Forgetting `delete`
- Using `delete` instead of `delete[]`
- Deleting twice
- Using pointer after delete

## 8. Dangling Pointer

Pointer points to memory that is no longer valid.

```cpp
int* p = new int(10);
delete p;
std::cout << *p; // wrong: dangling pointer
```

After delete:

```cpp
p = nullptr;
```

Better: use smart pointer.

## 9. Memory Leak

Memory leak happens when allocated memory is not freed.

```cpp
void bad() {
    int* p = new int(10);
} // leak: delete missing
```

Modern fix:

```cpp
auto p = std::make_unique<int>(10);
```

## 10. RAII

RAII means Resource Acquisition Is Initialization.

Idea:

```text
Resource is acquired in constructor and released in destructor.
```

Resource can be:

- Memory
- File handle
- Socket
- Lock
- Database connection

RAII is one of the most important C++ ideas.

Example:

```cpp
{
    std::ofstream file("data.txt");
    file << "Hello";
} // file closes automatically
```

## 11. Smart Pointers

Smart pointers manage dynamic memory automatically.

Header:

```cpp
#include <memory>
```

Types:

- `std::unique_ptr`
- `std::shared_ptr`
- `std::weak_ptr`

## 12. unique_ptr

`unique_ptr` means one owner.

```cpp
std::unique_ptr<int> p = std::make_unique<int>(10);
```

Cannot copy:

```cpp
// auto q = p; // error
```

Can move:

```cpp
auto q = std::move(p);
```

Use `unique_ptr` by default for owning heap objects.

## 13. shared_ptr

`shared_ptr` means shared ownership.

```cpp
std::shared_ptr<int> p1 = std::make_shared<int>(10);
std::shared_ptr<int> p2 = p1;
```

Object is deleted when last shared pointer is destroyed.

Use only when shared ownership is actually needed.

## 14. weak_ptr

`weak_ptr` observes a `shared_ptr` object without owning it.

Used to avoid cycles.

```cpp
std::weak_ptr<int> weak = p1;

if (auto locked = weak.lock()) {
    std::cout << *locked;
}
```

## 15. this Pointer

Inside a member function, `this` points to current object.

```cpp
class Person {
private:
    std::string name;

public:
    void setName(const std::string& name) {
        this->name = name;
    }
};
```

## 16. Pointer to Object and Arrow Operator

```cpp
Student s;
Student* p = &s;

p->name = "Nidhi";
```

`p->name` is same as `(*p).name`.

## 17. Rule of 0, 3, 5

### Rule of 0

Prefer classes that do not manually manage resources. Let standard library types handle resources.

```cpp
class User {
    std::string name;
    std::vector<int> scores;
};
```

No custom destructor/copy/move needed.

### Rule of 3

If you define one of these, you probably need all three:

- Destructor
- Copy constructor
- Copy assignment operator

### Rule of 5

Modern C++ adds:

- Move constructor
- Move assignment operator

## 18. Move Semantics

Move semantics transfers resources instead of copying.

```cpp
std::vector<int> a = {1, 2, 3};
std::vector<int> b = std::move(a);
```

After move, `a` is valid but unspecified. You can destroy it or assign a new value.

## 19. lvalue and rvalue

Simple explanation:

- lvalue has a stable location/name.
- rvalue is temporary.

```cpp
int x = 10; // x is lvalue, 10 is rvalue
```

## 20. Undefined Behavior

Undefined behavior means C++ standard gives no guarantee.

Examples:

- Out-of-bounds array access
- Dereferencing null pointer
- Using uninitialized variable
- Use after free
- Signed integer overflow

Undefined behavior is dangerous because program may appear to work and fail later.

## 21. Memory Interview Summary

```text
C++ gives low-level memory control through pointers and dynamic allocation, but modern C++ prefers RAII, containers, and smart pointers. RAII ties resource lifetime to object lifetime. unique_ptr represents single ownership, shared_ptr represents shared ownership, and weak_ptr observes shared ownership without extending lifetime. Avoid raw owning pointers when possible.
```
