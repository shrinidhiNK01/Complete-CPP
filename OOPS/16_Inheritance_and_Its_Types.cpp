#include<bits/stdc++.h>
using namespace std;

// Introduction to Inheritance in C++:
// Inheritance in C++ is a fundamental concept of object-oriented programming (OOP) that allows a class (derived class) to inherit properties and behaviors (data members and member functions) from another class (base class). It promotes code reusability and establishes a hierarchical relationship between classes.

// . Reusability is a very important feature of OOPs
// · In C++ we can reuse a class and add additional features to it

// · Reusing classes saves time and money
// · Reusing already tested and debugged class will save a lot of effort of
// developing and debugging the same thing again.

class Base {

    int budget; //private member variable, cannot be accessed outside the class, cannot be inherited by derived class
    public:

    void display() {
        cout << "This is the base class." << endl;
    }
};

// By default , the inheritance visibility mode is private. In private inheritance, the public and protected members of the base class become private members of the derived class. This means that they are not accessible outside the derived class, and they cannot be accessed by objects of the derived class.

class Derived : public Base {  // Derived class inherits from Base class
    public:
    void show() {
        cout << "This is the derived class." << endl;
    }
};



int main(){

    Base baseObj;
    baseObj.display();  // Calling base class function

    Derived derivedObj;
    derivedObj.display();  // Calling inherited base class function
    derivedObj.show();     // Calling derived class function

    // Inheritance in C++ is a mechanism that allows a class (derived class) to inherit properties and behaviors (data members and member functions) from another class (base class). It promotes code reusability and establishes a hierarchical relationship between classes.

    // Types of Inheritance in C++:
    // 1. Single Inheritance: A derived class inherits from a single base class.    (1 father -> 1 son)

    // 2. Multiple Inheritance: A derived class inherits from more than one base class. (1 father -> >2 sons)

    // 3. Multilevel Inheritance: A derived class inherits from another derived class, forming a chain of inheritance. (1 father -> 1 son -> 1 grandson)

    // 4. Hierarchical Inheritance: Multiple derived classes inherit from a single base class.(>2 fathers -> 1 son)

    // 5. Hybrid Inheritance: A combination of two or more types of inheritance.    (1 father -> 1 son -> 1 grandson) + (1 father -> >2 sons)

    return 0;
}


// Note:-
// =============
// . The concept of Reusability in C++ is supported using Inheritance
// . We can reuse the properties of an existing class by inherititing from it
// . The existing class is called as the Base Class
// . The new class which is inherited is called as the Derived Class

// . Reusing classes saves time and money
// . There are different types of inheritance in C++



// Note:
// 1. Default visibility mode is private
// 2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
// 3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
// 4. Private members are never inherited

// * 