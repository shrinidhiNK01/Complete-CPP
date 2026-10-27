# C++ Interview Q&A Cheatsheet

## 1. What Is C++?

C++ is a compiled, strongly typed, general-purpose language used for high-performance systems. It supports procedural, object-oriented, and generic programming.

## 2. C vs C++?

C is mainly procedural. C++ adds classes, objects, constructors, destructors, references, function overloading, templates, exceptions, namespaces, and STL.

## 3. What Is a Class?

A class is a blueprint that groups data members and member functions.

## 4. What Is an Object?

An object is an instance of a class.

## 5. What Is Encapsulation?

Encapsulation hides internal data and exposes controlled public functions.

## 6. What Is Abstraction?

Abstraction shows essential behavior and hides implementation details.

## 7. What Is Inheritance?

Inheritance lets a derived class reuse and extend a base class.

## 8. What Is Polymorphism?

Polymorphism means one interface can have many implementations. Compile-time polymorphism uses overloading/templates. Runtime polymorphism uses virtual functions.

## 9. What Is Function Overloading?

Multiple functions with same name but different parameter lists.

## 10. What Is Function Overriding?

A derived class provides its own implementation of a virtual base class function.

## 11. What Is a Constructor?

A constructor initializes an object when it is created.

## 12. What Is a Destructor?

A destructor runs when an object is destroyed and is used to release resources.

## 13. What Is a Copy Constructor?

A copy constructor creates a new object from an existing object.

## 14. What Is an Initialization List?

An initialization list initializes members before the constructor body runs. It is preferred and required for const/reference members and base constructors.

## 15. What Is a Friend Function?

A friend function is not a class member but can access private/protected members of that class.

## 16. What Is Static Member?

A static data member belongs to the class, not individual objects.

## 17. What Is a Pointer?

A pointer stores the memory address of another object.

## 18. What Is a Reference?

A reference is another name for an existing variable. It must be initialized.

## 19. Pointer vs Reference?

Pointer can be null and reassigned. Reference usually cannot be null and cannot be rebound after initialization.

## 20. What Is RAII?

RAII ties resource lifetime to object lifetime. Resource is acquired in constructor and released in destructor.

## 21. What Is unique_ptr?

`unique_ptr` is a smart pointer with single ownership.

## 22. What Is shared_ptr?

`shared_ptr` is a smart pointer with shared ownership using reference counting.

## 23. What Is weak_ptr?

`weak_ptr` observes a shared object without owning it and helps avoid shared pointer cycles.

## 24. What Is Memory Leak?

A memory leak happens when dynamically allocated memory is not released.

## 25. What Is Dangling Pointer?

A pointer that points to invalid/destroyed memory.

## 26. What Is Undefined Behavior?

Undefined behavior means the C++ standard gives no guarantee about what happens. Examples include out-of-bounds access and dereferencing null pointers.

## 27. What Is Virtual Function?

A virtual function allows derived class implementation to be called through a base pointer/reference.

## 28. Why Virtual Destructor?

If deleting derived objects through base pointers, base destructor should be virtual so derived destructor runs correctly.

## 29. What Is Pure Virtual Function?

A pure virtual function has `= 0` and makes the class abstract.

## 30. What Is Abstract Class?

A class with at least one pure virtual function. It cannot be instantiated.

## 31. What Is Template?

Template allows writing generic code that works with different types.

## 32. What Is STL?

STL is the standard library part containing containers, iterators, algorithms, and function objects.

## 33. vector vs array?

Array has fixed size. Vector is dynamic and safer for most use cases.

## 34. vector vs list?

Vector is contiguous and cache-friendly with fast indexing. List is linked and supports efficient insertion/removal with known iterator, but has worse cache performance.

## 35. map vs unordered_map?

`map` is ordered and usually tree-based with O(log n) operations. `unordered_map` is hash-based with average O(1) operations and no ordering.

## 36. What Is Iterator?

Iterator is an object used to traverse containers.

## 37. What Is Lambda?

A lambda is an anonymous function object.

## 38. What Is const Correctness?

Using `const` to show data or functions do not modify state.

## 39. What Is Move Semantics?

Move semantics transfers resources from one object to another instead of copying.

## 40. Rule of 0/3/5?

Rule of 0: prefer no custom resource management. Rule of 3: if destructor/copy constructor/copy assignment is needed, likely all three are needed. Rule of 5 adds move constructor and move assignment.

## 41. What Is Exception Safety?

Exception safety means code remains correct when exceptions occur. RAII helps because destructors clean up automatically.

## 42. What Is Namespace?

Namespace groups names and prevents naming conflicts.

## 43. What Is `this` Pointer?

`this` points to the current object inside a member function.

## 44. What Is Operator Overloading?

Defining custom behavior for operators for user-defined types.

## 45. What Is Multiple Inheritance Ambiguity?

When a derived class inherits same member name from multiple bases, calls can become ambiguous. Resolve with scope operator or virtual inheritance if diamond problem exists.

## 46. What Is Virtual Base Class?

Virtual base class prevents duplicate base subobjects in diamond inheritance.

## 47. What Is Header File?

Header file usually contains declarations shared across source files.

## 48. What Is Linking?

Linking combines object files and libraries into final executable.

## 49. How Do You Debug C++?

Use compiler warnings, debugger, breakpoints, sanitizers, tests, and careful inspection of undefined behavior.

## 50. Final 60-Second Answer

```text
C++ is a compiled high-performance language supporting procedural, object-oriented, and generic programming. The basics include variables, data types, operators, control flow, functions, arrays, strings, structs, and file I/O. OOP in C++ uses classes, encapsulation, constructors, destructors, inheritance, and polymorphism through virtual functions. Memory is managed through stack, heap, pointers, references, RAII, and smart pointers like unique_ptr and shared_ptr. STL provides containers, iterators, algorithms, and templates for generic programming. Modern C++ adds safer features like auto, nullptr, lambdas, move semantics, optional, variant, ranges, concepts, and better resource management.
```
