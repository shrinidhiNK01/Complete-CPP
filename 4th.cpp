#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "Hello";
    string s2 = "World";
    string s3 = s1 + " " + s2; // Concatenation
    cout << s3 << endl; // Output: Hello World
    string s4 = s3.substr(0, 5); // Substring  (start index, length)
    cout << s4 << endl; // Output: Hello
    string s5 = s3.substr(6); // Substring from index 6 to end
    cout << s5 << endl; // Output: World
    string s6 = s3; // Copy constructor
    cout << s6 << endl; // Output: Hello World
    s6[0] = 'h'; // Modify the first character
    cout << s6 << endl; // Output: hello World
    string s7(5, 'a'); // Create a string with 5 characters, each initialized to 'a'
    cout << s7 << endl; // Output: aaaaa
    
    // Methods
    // ===================
    s1.append(" C++"); // Append to the string
    cout << s1 << endl; // Output: Hello C++
    s1.size(); // Get the size of the string
    cout << s1.size() << endl; // Output: 10
    s1.length(); // Get the length of the string
    cout << s1.length() << endl; // Output: 10
    s1.empty(); // Check if the string is empty
    cout << s1.empty() << endl; // Output: 0 (false)
    s1.capacity(); // Get the capacity of the string
    cout << s1.capacity() << endl; // Output: (varies, implementation-dependent)
    s1[0]; // Access the first character
    cout << s1[0] << endl; // Output: H
    s1.at(0); // Access the first character with bounds checking
    cout << s1.at(0) << endl; // Output: H
    s1.find("C++"); // Find the substring "C++"
    cout << s1.find("C++") << endl; // Output: 6
    s1.replace(6, 3, "Java"); // Replace "C++" with "Java"
    cout << s1 << endl; // Output: Hello Java
    s1.front(); // Get the first character
    cout << s1.front() << endl; // Output: H
    s1.back(); // Get the last character
    cout << s1.back() << endl; // Output: a
    s1 += "abc";              // append
    s1.append("xyz");         // append
    s1.push_back('a');        // add char
    s1.pop_back();            // remove last char

    s1.insert(2, "abc");      // insert at index
    s1.erase(2, 3);           // erase 3 chars from index 2
    s1.replace(2, 3, "xyz");  // replace substring

    s1.find("abc");           // first occurrence
    cout << s1.find("abc") << endl; // Output: 2
    s1.rfind("abc");          // last occurrence
    cout << s1.rfind("abc") << endl; // Output: 2
    s1.find('a');             // find char
    cout << s1.find('a') << endl; // Output: 2


    reverse(s1.begin(), s1.end());
    cout << s1 << endl; // Output: (reversed string)
    sort(s1.begin(), s1.end());
    cout << s1 << endl; // Output: (sorted string)
    cout << count(s1.begin(), s1.end(), 'a') << endl; // Output: (count of 'a')
    s1.erase(remove(s1.begin(), s1.end(), 'a'), s1.end());
}