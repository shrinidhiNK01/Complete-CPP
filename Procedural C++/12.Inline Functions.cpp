#include <bits/stdc++.h>
using namespace std;
void myFunction(int a, int b) {
  static int count = 0; // static variable is initialized only once and retains its value between function calls. It is stored in the data segment of the memory and is not destroyed when the function exits. It can be accessed only within the function in which it is declared.
  count++;
  cout << count << endl;
}

inline int swapFunction(int a,int b){ // inline function is a function that is expanded in line when it is called. It is used to reduce the function call overhead. It is defined using the inline keyword. It is stored in the text segment of the memory and is not destroyed when the function exits. It can be accessed only within the function in which it is declared.
  int temp=a;
  a=b;
  b=temp;
  return a;
}

inline int strlen(char *str){ //
  int count=0;  
  while(*str!='\0'){
    count++;
    str++;
  }
  return count;
}

int main() {
  int a = 10;
  int b = 20;
  myFunction(a, b);
  myFunction(a, b);
  myFunction(a, b);
  int c=swapFunction(a,b);
  cout<<c;
}