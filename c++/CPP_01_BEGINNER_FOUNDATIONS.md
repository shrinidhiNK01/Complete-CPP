# C++ Beginner Foundations

## 1. What Is C++?

C++ is a general-purpose programming language. It is used when performance and control matter.

Common uses:

- Competitive programming
- Game development
- Operating systems
- Embedded systems
- Browsers
- Trading systems
- Databases
- High-performance servers
- Robotics
- AI/ML libraries

C++ is powerful because it gives both high-level and low-level control.

High-level:

- Classes
- Templates
- Standard library
- Containers
- Algorithms

Low-level:

- Pointers
- Manual memory control
- Hardware-level performance
- Direct resource management

## 2. C++ vs C

C is mostly procedural. C++ supports procedural programming plus object-oriented programming and generic programming.

C++ adds:

- Classes and objects
- Constructors and destructors
- Function overloading
- Operator overloading
- Templates
- Exceptions
- References
- Namespaces
- STL containers and algorithms
- Smart pointers

## 3. Compiler and IDE

C++ code must be compiled.

Common compilers:

- GCC / g++
- Clang / clang++
- MSVC on Windows

Common editors/IDEs:

- VS Code
- Visual Studio
- CLion
- Code::Blocks

Compile from terminal:

```bash
g++ main.cpp -o main
./main
```

Compile with modern standard:

```bash
g++ -std=c++20 main.cpp -o main
```

On Windows PowerShell, the executable may run as:

```powershell
.\main.exe
```

## 4. First C++ Program

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, C++!" << std::endl;
    return 0;
}
```

Explanation:

- `#include <iostream>` includes input/output library.
- `int main()` is the program entry point.
- `std::cout` prints output.
- `<<` sends text to output stream.
- `std::endl` prints a newline and flushes output.
- `return 0` means program ended successfully.

## 5. Basic Program Structure

```cpp
#include <iostream>

int main() {
    // statements go here
    return 0;
}
```

A statement usually ends with semicolon.

```cpp
int age = 20;
```

C++ is case-sensitive:

```cpp
Age
age
AGE
```

These are different names.

## 6. Comments

Single-line comment:

```cpp
// This is a comment
```

Multi-line comment:

```cpp
/*
This is a
multi-line comment
*/
```

Use comments to explain why something is done, not every obvious line.

## 7. Variables

A variable is a named memory location.

```cpp
int age = 21;
double price = 99.50;
char grade = 'A';
bool passed = true;
```

Variable declaration:

```cpp
int x;
```

Variable initialization:

```cpp
int x = 10;
```

Modern brace initialization:

```cpp
int x{10};
```

Brace initialization helps avoid some narrowing conversions.

## 8. Data Types

Common basic types:

```text
int       whole numbers
long      larger whole numbers
long long very large whole numbers
float     decimal numbers, less precision
double    decimal numbers, more precision
char      single character
bool      true or false
string    text, from <string>
```

Example:

```cpp
#include <iostream>
#include <string>

int main() {
    int age = 25;
    double salary = 45000.75;
    char grade = 'A';
    bool isActive = true;
    std::string name = "Nidhi";

    std::cout << name << " " << age << "\n";
}
```

## 9. Constants

A constant cannot be changed after initialization.

```cpp
const double pi = 3.14159;
```

Modern C++ also uses `constexpr` for compile-time constants.

```cpp
constexpr int maxUsers = 100;
```

Use constants when a value should not change.

## 10. Scope

Scope means where a variable is visible.

Local variable:

```cpp
int main() {
    int x = 10; // visible inside main
}
```

Block scope:

```cpp
if (true) {
    int y = 20;
}
// y is not visible here
```

Global variable:

```cpp
int counter = 0;

int main() {
    counter++;
}
```

Avoid global variables unless truly needed.

## 11. Input and Output

Output:

```cpp
std::cout << "Hello";
```

Input:

```cpp
int age;
std::cin >> age;
```

Full example:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Hello " << name << ", age " << age << "\n";
}
```

`std::cin >> name` reads only one word. For full line input:

```cpp
std::getline(std::cin, name);
```

## 12. Header Files

Header files contain declarations.

Common headers:

```cpp
#include <iostream>  // input/output
#include <string>    // std::string
#include <vector>    // std::vector
#include <algorithm> // algorithms like sort
#include <map>       // std::map
#include <memory>    // smart pointers
```

## 13. Namespace

Many standard library names are inside namespace `std`.

Correct:

```cpp
std::cout << "Hello";
```

You may see:

```cpp
using namespace std;
```

This avoids writing `std::`, but in professional code it is better to avoid `using namespace std;` in headers and large projects because it can create name conflicts.

## 14. Operators

Arithmetic:

```text
+ addition
- subtraction
* multiplication
/ division
% remainder
```

Comparison:

```text
== equal
!= not equal
> greater
< smaller
>= greater or equal
<= smaller or equal
```

Logical:

```text
&& and
|| or
! not
```

Assignment:

```text
=
+=
-=
*=
/=
%=
```

Increment/decrement:

```cpp
x++;
++x;
x--;
--x;
```

## 15. Operator Precedence

Precedence decides which operator runs first.

Example:

```cpp
int result = 2 + 3 * 4; // 14, not 20
```

Multiplication happens before addition.

Use parentheses for clarity:

```cpp
int result = (2 + 3) * 4; // 20
```

## 16. Type Casting

Implicit conversion:

```cpp
double x = 5; // int becomes double
```

Explicit cast:

```cpp
double result = static_cast<double>(a) / b;
```

Prefer C++ casts such as:

- `static_cast`
- `const_cast`
- `dynamic_cast`
- `reinterpret_cast`

Avoid old C-style casts in serious code.

## 17. Manipulators

Manipulators format output.

```cpp
#include <iostream>
#include <iomanip>

int main() {
    double value = 12.34567;
    std::cout << std::fixed << std::setprecision(2) << value << "\n";
}
```

Output:

```text
12.35
```

## 18. Beginner Checklist

You should be comfortable with:

- Writing `main`
- Including headers
- Printing output
- Reading input
- Declaring variables
- Using data types
- Using constants
- Understanding scope
- Using operators
- Compiling and running code

## 19. Beginner Interview Answer

```text
C++ is a compiled, strongly typed language used for high-performance applications. A basic C++ program starts from main(), uses headers like iostream for input/output, stores data in typed variables, and uses operators, control flow, functions, and classes to organize logic.
```
