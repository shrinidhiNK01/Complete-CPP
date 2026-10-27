#include <bits/stdc++.h>
#include "user_defined_header.h" //this is a user defined header file. It is created by the user. It contains the declaration of the function user_defined_header_demo() which is defined in the file user_defined_header.cpp , it will produce an error if the file is not present in the same directory as the main file. It is included in the main file using #include "user_defined_header.h" directive. The function user_defined_header_demo() is called in the main function to demonstrate the use of user defined header files.
using namespace std;
int main() {
    // Header files
    // System Header Files:- It comes with a compiler. eg:-#include <iostream>
    // User Defined Header Files:- It is created by the user. eg:-#include "this.h"

    user_defined_header_demo();

    // Type casting:==> Converting one data type to another data type is called type casting.
    // 1. Implicit Type Casting:==> It is done by the compiler automatically
    // 2. Explicit Type Casting:==> It is done by the programmer manually
    
    int a = 10;
    float b = static_cast<float>(a);   // correct explicit casting

    cout << b << endl;
    cout << typeid(a).name() << endl; 
    cout << typeid(b).name() << endl;

    // #include<manip>  // for manipulators
    // Manipulators:==> It is used to format the output. eg:- endl, setw, setprecision, etc.
     cout << "Hello" << endl;  // endl is a manipulator that moves the cursor to the next line
     cout << "World" << endl;

    cout << setw(10) << "Hello" << endl;  // setw is a manipulator that sets the width of the output    
    cout << setw(10) << "World" << endl;

    return 0;
}

