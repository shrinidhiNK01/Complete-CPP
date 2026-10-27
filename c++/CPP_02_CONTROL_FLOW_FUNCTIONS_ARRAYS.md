# Control Flow, Functions, Arrays, Strings, Structs

## 1. Control Flow

Control flow decides which code runs and how many times it runs.

Main control flow tools:

- `if`
- `else`
- `else if`
- `switch`
- `for`
- `while`
- `do while`
- `break`
- `continue`

## 2. If Else

```cpp
int age = 18;

if (age >= 18) {
    std::cout << "Adult\n";
} else {
    std::cout << "Minor\n";
}
```

Use `if` when code depends on a condition.

## 3. Else If

```cpp
int marks = 85;

if (marks >= 90) {
    std::cout << "A\n";
} else if (marks >= 75) {
    std::cout << "B\n";
} else if (marks >= 50) {
    std::cout << "C\n";
} else {
    std::cout << "Fail\n";
}
```

## 4. Switch Case

Use `switch` when checking one value against many fixed cases.

```cpp
int day = 2;

switch (day) {
    case 1:
        std::cout << "Monday\n";
        break;
    case 2:
        std::cout << "Tuesday\n";
        break;
    default:
        std::cout << "Unknown\n";
}
```

`break` stops fall-through.

## 5. For Loop

Use when number of repetitions is known.

```cpp
for (int i = 1; i <= 5; i++) {
    std::cout << i << "\n";
}
```

## 6. While Loop

Use when condition controls repetition.

```cpp
int i = 1;

while (i <= 5) {
    std::cout << i << "\n";
    i++;
}
```

## 7. Do While Loop

Runs at least once.

```cpp
int choice;

do {
    std::cout << "Enter 0 to exit: ";
    std::cin >> choice;
} while (choice != 0);
```

## 8. Break and Continue

`break` exits loop.

```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) break;
    std::cout << i << "\n";
}
```

`continue` skips current iteration.

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;
    std::cout << i << "\n";
}
```

## 9. Functions

A function is a reusable block of code.

```cpp
int add(int a, int b) {
    return a + b;
}
```

Call function:

```cpp
int result = add(3, 4);
```

## 10. Function Prototype

A prototype declares a function before definition.

```cpp
int add(int a, int b);

int main() {
    std::cout << add(2, 3);
}

int add(int a, int b) {
    return a + b;
}
```

## 11. Call by Value

Function receives a copy.

```cpp
void change(int x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    std::cout << a; // still 10
}
```

## 12. Call by Reference

Function receives original variable.

```cpp
void change(int& x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    std::cout << a; // 100
}
```

Use references when you want to modify original value or avoid copying large objects.

## 13. Const Reference

Use const reference to avoid copying while preventing modification.

```cpp
void printName(const std::string& name) {
    std::cout << name << "\n";
}
```

This is common in professional C++.

## 14. Default Arguments

```cpp
void greet(std::string name = "Guest") {
    std::cout << "Hello " << name << "\n";
}
```

## 15. Inline Functions

`inline` suggests that a function can be defined in multiple translation units and may be expanded by compiler.

```cpp
inline int square(int x) {
    return x * x;
}
```

Do not overuse `inline`. Modern compilers optimize automatically.

## 16. Function Overloading

Same function name, different parameters.

```cpp
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}
```

Return type alone cannot overload a function.

## 17. Recursion

Recursion means a function calls itself.

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
```

Every recursive function needs:

- Base case
- Recursive case

Without base case, recursion becomes infinite.

## 18. Arrays

Array stores multiple values of same type.

```cpp
int marks[5] = {90, 80, 70, 60, 50};
```

Access:

```cpp
std::cout << marks[0]; // first element
```

Array indexes start from 0.

## 19. Looping Through Array

```cpp
int arr[] = {1, 2, 3, 4, 5};

for (int i = 0; i < 5; i++) {
    std::cout << arr[i] << "\n";
}
```

Modern range-for:

```cpp
for (int value : arr) {
    std::cout << value << "\n";
}
```

## 20. C-Style Strings vs std::string

C-style string:

```cpp
char name[] = "Nidhi";
```

Modern C++ string:

```cpp
std::string name = "Nidhi";
```

Prefer `std::string` in normal C++ code.

## 21. std::string Basics

```cpp
#include <string>

std::string name = "Nidhi";
std::cout << name.length();
std::cout << name[0];
name += " K";
```

Read full line:

```cpp
std::getline(std::cin, name);
```

If `getline` comes after `cin >>`, handle leftover newline:

```cpp
std::cin.ignore();
std::getline(std::cin, name);
```

## 22. Structures

Struct groups related data.

```cpp
struct Student {
    int id;
    std::string name;
    double marks;
};

Student s{1, "Nidhi", 95.5};
std::cout << s.name;
```

In C++, `struct` members are public by default.

## 23. Unions

Union stores different members in same memory location.

```cpp
union Data {
    int i;
    float f;
};
```

Only one active member should be used at a time. Use carefully.

## 24. Enums

Enum gives names to constants.

```cpp
enum Color {
    Red,
    Green,
    Blue
};
```

Modern safer enum:

```cpp
enum class Status {
    Pending,
    Success,
    Failed
};
```

Prefer `enum class` because it avoids name pollution and implicit integer conversion.

## 25. Practice Problems

1. Print numbers from 1 to 100.
2. Find largest of three numbers.
3. Print multiplication table.
4. Reverse an array.
5. Count vowels in a string.
6. Write factorial using loop and recursion.
7. Create a `Student` struct and print details.

## 26. Interview Summary

```text
Control flow decides program paths and repetition. Functions organize reusable logic. Arrays store same-type elements, strings store text, structs group related data, and enums give meaningful names to constants. References allow functions to work with original values, while const references avoid unnecessary copies.
```
