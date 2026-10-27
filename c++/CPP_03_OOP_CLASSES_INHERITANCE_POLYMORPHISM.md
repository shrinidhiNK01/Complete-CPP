# Object-Oriented Programming in C++

## 1. What Is OOP?

Object-Oriented Programming organizes code around objects.

An object contains:

- Data
- Functions that operate on that data

Main OOP principles:

- Encapsulation
- Abstraction
- Inheritance
- Polymorphism

## 2. Class and Object

A class is a blueprint. An object is an instance of a class.

```cpp
class Student {
public:
    std::string name;
    int age;

    void introduce() {
        std::cout << "I am " << name << "\n";
    }
};

int main() {
    Student s;
    s.name = "Nidhi";
    s.age = 21;
    s.introduce();
}
```

## 3. Access Modifiers

### public

Accessible from outside class.

### private

Accessible only inside class.

### protected

Accessible inside class and derived classes.

Example:

```cpp
class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    double getBalance() const {
        return balance;
    }
};
```

## 4. Encapsulation

Encapsulation means hiding internal data and exposing controlled functions.

Bad:

```cpp
account.balance = -1000;
```

Good:

```cpp
account.deposit(100);
```

Encapsulation protects object state.

## 5. Member Functions

Functions inside class are member functions.

```cpp
class Rectangle {
private:
    int width;
    int height;

public:
    int area() const {
        return width * height;
    }
};
```

`const` after member function means it does not modify object.

## 6. Nesting of Member Functions

One member function can call another.

```cpp
class Number {
private:
    int value;

    bool isValid() const {
        return value >= 0;
    }

public:
    void print() const {
        if (isValid()) std::cout << value;
    }
};
```

## 7. Static Data Members

Static data member belongs to class, not individual object.

```cpp
class Counter {
private:
    static int count;

public:
    Counter() {
        count++;
    }

    static int getCount() {
        return count;
    }
};

int Counter::count = 0;
```

## 8. Static Member Functions

Static member functions can access only static members directly.

```cpp
Counter::getCount();
```

## 9. Array of Objects

```cpp
Student students[3];
```

For dynamic/resizable list, prefer:

```cpp
std::vector<Student> students;
```

## 10. Passing Objects to Functions

By value:

```cpp
void print(Student s);
```

Copies object.

By const reference:

```cpp
void print(const Student& s);
```

Avoids copy and prevents modification. Prefer this for large objects.

## 11. Friend Function

A friend function can access private members.

```cpp
class Box {
private:
    int width;

public:
    Box(int w) : width(w) {}
    friend void printWidth(const Box& b);
};

void printWidth(const Box& b) {
    std::cout << b.width;
}
```

Use friends carefully. Too many friends can break encapsulation.

## 12. Friend Class

```cpp
class Engine {
private:
    int power = 100;
    friend class Mechanic;
};

class Mechanic {
public:
    void inspect(const Engine& e) {
        std::cout << e.power;
    }
};
```

## 13. Constructors

Constructor runs when object is created.

```cpp
class Student {
private:
    std::string name;

public:
    Student(const std::string& n) {
        name = n;
    }
};
```

## 14. Initialization List

Prefer initialization lists.

```cpp
class Student {
private:
    std::string name;
    int age;

public:
    Student(std::string n, int a) : name(std::move(n)), age(a) {}
};
```

Initialization lists are required for:

- const members
- reference members
- base class constructors
- members without default constructors

## 15. Default Constructor

Constructor with no parameters.

```cpp
class Point {
public:
    Point() : x(0), y(0) {}

private:
    int x;
    int y;
};
```

## 16. Parameterized Constructor

```cpp
Point(int xValue, int yValue) : x(xValue), y(yValue) {}
```

## 17. Constructor Overloading

Multiple constructors with different parameters.

```cpp
class Point {
public:
    Point() : x(0), y(0) {}
    Point(int v) : x(v), y(v) {}
    Point(int xValue, int yValue) : x(xValue), y(yValue) {}

private:
    int x;
    int y;
};
```

## 18. Copy Constructor

Copy constructor creates object from another object.

```cpp
class Demo {
public:
    Demo(const Demo& other) {
        // copy data
    }
};
```

Compiler provides a default copy constructor if you do not define one.

If class manages raw resources, copy behavior must be handled carefully.

## 19. Destructor

Destructor runs when object is destroyed.

```cpp
class File {
public:
    ~File() {
        std::cout << "Cleaning up\n";
    }
};
```

Destructors are central to RAII.

## 20. Inheritance

Inheritance lets one class reuse/extend another class.

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

## 21. Types of Inheritance

Single:

```text
A -> B
```

Multilevel:

```text
A -> B -> C
```

Multiple:

```text
A + B -> C
```

Hierarchical:

```text
A -> B
A -> C
```

Hybrid:

Combination of multiple forms.

## 22. Visibility Modes

```cpp
class Derived : public Base {};
class Derived : protected Base {};
class Derived : private Base {};
```

Most common is public inheritance.

Public inheritance means "is-a".

Example:

```text
Dog is an Animal
```

## 23. Protected Access

Protected members are accessible in derived classes but not outside.

```cpp
class Base {
protected:
    int value;
};

class Derived : public Base {
public:
    void setValue(int v) {
        value = v;
    }
};
```

## 24. Ambiguity in Multiple Inheritance

```cpp
class A {
public:
    void show() {}
};

class B {
public:
    void show() {}
};

class C : public A, public B {};
```

Calling `c.show()` is ambiguous.

Resolve:

```cpp
c.A::show();
c.B::show();
```

## 25. Virtual Base Class

Used to solve diamond inheritance problem.

```cpp
class A {};
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};
```

This ensures only one shared `A` subobject in `D`.

## 26. Polymorphism

Polymorphism means one interface, many forms.

Types:

- Compile-time polymorphism: function overloading, operator overloading, templates
- Runtime polymorphism: virtual functions

## 27. Virtual Functions

Virtual function allows runtime dispatch.

```cpp
class Shape {
public:
    virtual double area() const {
        return 0;
    }
};

class Circle : public Shape {
public:
    double area() const override {
        return 3.14 * radius * radius;
    }

private:
    double radius = 1;
};
```

## 28. Base Pointer to Derived Object

```cpp
Shape* shape = new Circle();
std::cout << shape->area();
delete shape;
```

If using runtime polymorphism, base destructor should usually be virtual:

```cpp
virtual ~Shape() = default;
```

## 29. Pure Virtual Function

A pure virtual function makes a class abstract.

```cpp
class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};
```

You cannot create object of abstract class.

## 30. Abstract Base Class

Abstract class defines an interface.

```cpp
class Payment {
public:
    virtual void pay(double amount) = 0;
    virtual ~Payment() = default;
};
```

Derived classes implement behavior.

## 31. OOP Interview Summary

```text
OOP in C++ uses classes and objects to combine data and behavior. Encapsulation hides internal state, inheritance reuses and extends classes, and polymorphism allows derived classes to be used through base class interfaces. Constructors initialize objects, destructors clean resources, and virtual functions enable runtime polymorphism.
```
