#include<bits/stdc++.h>
using namespace std;
#define PI 3.14  // Macro definition
int main() {
    // Preprocessor Directives:==> It is a line of code that is processed before the compilation of the program. It is used to include header files, define macros, etc. eg:- #include <iostream>, #define PI 3.14, etc.
    cout << "The value of PI is: " << PI << endl;

    // Comments:==> It is a line of code that is ignored by the compiler. It is used to explain the code and make it more readable. eg:- // This is a single line comment, /* This is a multi-line comment */, etc.
    // This is a single line comment
    /* This is a multi-line comment
    It can span multiple lines */

    // Arrays:- An array is a collection of variables of the same type, accessed using an index. It is used to store multiple values in a single variable. eg:- int arr[5];, char str[10];, etc.
    int arr[5] = {1, 2, 3, 4, 5};
    char str[10] = "Hello";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    // The name of the array is a pointer to the first element of the array. eg:- arr is a pointer to the first element of the array, str is a pointer to the first element of the string, etc.
    cout<<endl;
    &arr[0];  // it will print the address of the first element of the array
    &str[0];  // it will print the address of the first element of the string
    // &arr;  it is wrong

    // Pointer Arithmatic:==> It is the process of performing arithmetic operations on pointers. It is used to traverse the array, access the elements of the array, etc. eg:- arr+1, str+1, etc.
    cout<<arr+1<<endl;  // it will print the address of the second element of the array
    cout<<str+1<<endl;  // it will print the address of the second element of the string
    cout<<*(arr+1)<<endl;  // it will print the value of the second element of the array
    cout<<*(str+1)<<endl;  // it will print the value of the second element of the string
    // new address = old address+number of bytes*number of elements
    // new address = old address+i*sizeof(data type)*number of elements
    //   |               |
    // (p+i)            (p)

    // Pointers and Arrays:==> The name of the array is a pointer to the first element of the array. It is used to access the elements of the array using pointers. eg:- arr[0], str[0], etc.
    cout<<*arr<<endl;  // it will print the value of the first element
    cout<<*str<<endl;  // it will print the value of the first element of the string
    cout<<arr[0]<<endl;  // it will print the value of the first element of the array
    cout<<str[0]<<endl;  // it will print the value of the first element of the string
    cout<<*(arr+1)<<endl;  // it will print the value of the second element of the array
    cout<<*(str+1)<<endl;  // it will print the value of the second element of the string
    
    int *ptr=arr;  // ptr is a pointer variable that stores the address of the first element of the array. It is declared as int* because it points to an integer variable.
    cout<<*(ptr++)<<endl;
    cout<<*(++ptr)<<endl;

}