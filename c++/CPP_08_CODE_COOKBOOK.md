# C++ Code Cookbook

## 1. Hello World

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, C++!\n";
    return 0;
}
```

## 2. Input Output

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Name: ";
    std::getline(std::cin, name);

    std::cout << "Age: ";
    std::cin >> age;

    std::cout << name << " is " << age << " years old.\n";
}
```

## 3. If Else

```cpp
if (marks >= 50) {
    std::cout << "Pass\n";
} else {
    std::cout << "Fail\n";
}
```

## 4. Loops

```cpp
for (int i = 1; i <= 10; i++) {
    std::cout << i << "\n";
}
```

```cpp
int i = 1;
while (i <= 10) {
    std::cout << i << "\n";
    i++;
}
```

## 5. Function

```cpp
int add(int a, int b) {
    return a + b;
}
```

## 6. Reference Parameter

```cpp
void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
```

## 7. Recursion

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
```

## 8. Array

```cpp
int arr[] = {1, 2, 3, 4, 5};

for (int x : arr) {
    std::cout << x << "\n";
}
```

## 9. Vector

```cpp
#include <vector>

std::vector<int> nums;
nums.push_back(10);
nums.push_back(20);
```

## 10. Struct

```cpp
struct Student {
    int id;
    std::string name;
};
```

## 11. Class

```cpp
class BankAccount {
private:
    double balance = 0;

public:
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    double getBalance() const {
        return balance;
    }
};
```

## 12. Constructor

```cpp
class Person {
private:
    std::string name;

public:
    Person(std::string n) : name(std::move(n)) {}
};
```

## 13. Inheritance

```cpp
class Animal {
public:
    void eat() {
        std::cout << "Eating\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Barking\n";
    }
};
```

## 14. Virtual Function

```cpp
class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }
};
```

## 15. unique_ptr

```cpp
#include <memory>

auto p = std::make_unique<int>(42);
std::cout << *p;
```

## 16. shared_ptr

```cpp
auto p1 = std::make_shared<int>(42);
auto p2 = p1;
```

## 17. Template Function

```cpp
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
```

## 18. Template Class

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

## 19. Sort Vector

```cpp
#include <algorithm>
#include <vector>

std::vector<int> v = {5, 1, 4, 2};
std::sort(v.begin(), v.end());
```

## 20. Sort With Lambda

```cpp
std::sort(v.begin(), v.end(), [](int a, int b) {
    return a > b;
});
```

## 21. Map Frequency Count

```cpp
std::unordered_map<std::string, int> freq;

for (const auto& word : words) {
    freq[word]++;
}
```

## 22. File Read

```cpp
std::ifstream file("data.txt");
std::string line;

while (std::getline(file, line)) {
    std::cout << line << "\n";
}
```

## 23. File Write

```cpp
std::ofstream file("out.txt");
file << "Hello\n";
```

## 24. Exception

```cpp
try {
    throw std::runtime_error("error");
} catch (const std::exception& e) {
    std::cout << e.what();
}
```

## 25. Thread

```cpp
#include <thread>

void work() {
    std::cout << "Work\n";
}

int main() {
    std::thread t(work);
    t.join();
}
```

## 26. Mutex

```cpp
std::mutex m;
int counter = 0;

void inc() {
    std::lock_guard<std::mutex> lock(m);
    counter++;
}
```

## 27. Complete Mini Project: Student Manager

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Student {
    int id;
    std::string name;
    double marks;
};

void addStudent(std::vector<Student>& students) {
    Student s;
    std::cout << "ID: ";
    std::cin >> s.id;
    std::cin.ignore();
    std::cout << "Name: ";
    std::getline(std::cin, s.name);
    std::cout << "Marks: ";
    std::cin >> s.marks;
    students.push_back(s);
}

void showStudents(const std::vector<Student>& students) {
    for (const auto& s : students) {
        std::cout << s.id << " " << s.name << " " << s.marks << "\n";
    }
}

int main() {
    std::vector<Student> students;
    int choice;

    do {
        std::cout << "1 Add\n2 Show\n0 Exit\n";
        std::cin >> choice;

        if (choice == 1) addStudent(students);
        else if (choice == 2) showStudents(students);
    } while (choice != 0);
}
```
