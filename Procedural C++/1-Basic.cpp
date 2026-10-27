#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ============================================================
    // PART 1: BASIC C++ PROGRAM
    // ============================================================

    // main() is the entry point of the program.
    // Its return type is int because it returns an integer
    // value to the operating system after execution.

    cout << "Hello World" << endl;

    // ============================================================
    // PART 2: VARIABLE DECLARATION AND INITIALIZATION
    // ============================================================

    int a = 10;

    cout << "Value of a is: " << a << endl;

    // ============================================================
    // PART 3: BASIC DATA TYPES
    // ============================================================

    int num;
    float b1 = 10.5;
    float b2 = 10.5F;
    float b3 = 10.5f;
    char c = 'A';
    double d = 10.5;
    long long e = 10000000000LL;
    long double f = 10.5L;
    bool g = true;

    // Input an integer
    cout << "Enter an integer: ";
    cin >> num;

    // Display the entered integer
    cout << "You entered: " << num << endl;

    // Display the size of data types
    cout << "Size of double: " << sizeof(d) << " bytes" << endl;
    cout << "Size of long double literal: "
         << sizeof(10.09L) << " bytes" << endl;

    // Display other variables
    cout << "Float b1: " << b1 << endl;
    cout << "Float b2: " << b2 << endl;
    cout << "Float b3: " << b3 << endl;
    cout << "Character c: " << c << endl;
    cout << "Long long e: " << e << endl;
    cout << "Long double f: " << f << endl;
    cout << "Boolean g: " << g << endl;

    // ============================================================
    // PART 4: TYPE CONVERSION
    // ============================================================

    int x = 10;

    // Convert int to float
    cout << "Integer converted to float: "
         << float(x) << endl;

    float y = 20.75;

    // Convert float to int
    // The decimal part is removed.
    cout << "Float converted to integer: "
         << int(y) << endl;

    // ============================================================
    // PART 5: VARIABLES - LOCAL AND GLOBAL
    // ============================================================

    // Local variables are declared inside a function or block.
    // They can be accessed only within their scope.
    //
    // Global variables are declared outside all functions.
    // They can be accessed by functions within their scope.
    //
    // All variables declared in this main() function are local.

    // ============================================================
    // PART 6: STRING INPUT
    // ============================================================

    // cin >> reads input until whitespace.
    // getline() reads an entire line, including spaces.
    //
    // ignore() removes the leftover newline from the previous cin.

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;

    cout << "Enter your name: ";
    getline(cin, s);

    cout << "Your name is: " << s << endl;

    
    // ============================================================
    // PART 8: SUM OF 6 NUMBERS
    // ============================================================

    cout << "Enter 6 numbers: ";

    int a1, b4, c1, d1, e1, f1;

    cin >> a1 >> b4 >> c1 >> d1 >> e1 >> f1;

    int sum = a1 + b4 + c1 + d1 + e1 + f1;

    cout << "Sum: " << sum << endl;


    // Manipulators:==> It is used to format the output. eg:- endl, setw, setprecision, etc.
    // setw() is a manipulator that sets the width of the output.
    int a =3, b=78, c=1233;
cout << "The value of a without setw is: " << a << endl;
cout << "The value of b without setw is: " << b << endl;
cout << "The value of c without setw is: " << c << endl;

cout << "The value of a is: " << setw(4) << a << endl;
cout << "The value of b is: " << setw(4) << b << endl;
cout << "The value of c is: " << setw(4) << c << endl;

    // ============================================================
    // PART 11: END OF PROGRAM
    // ============================================================

    // return 0 means the program executed successfully.
    return 0;
}