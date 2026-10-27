// Allocate 10 bit memory 
// ----------------------
// Without this, you'd have a memory leak.

#include <iostream>
#include <cstring>
#include <vector>
#include <string>
using namespace std;
int main()
{
char * buffer=new char[10]; //Dynamically allocates an array of 10 characters on the heap.buffer stores the address of the first character.
memset(buffer,0,10); //memset(pointer, value, number_of_bytes);
cout<<buffer<<endl;
delete[] buffer; //Releases the dynamically allocated array.

// or

vector<char> buffer2(10, '\0');
cout << buffer2.data() << std::endl;

// or

string buffer3(10, '\0');
cout << buffer3 << endl;

}