#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // ============================================================
    // ARRAYS :- collection of similar data types stored in contiguous memory locations. It is a data structure that can store a fixed-size sequential collection of elements of the same type. The elements can be accessed using an index. The index starts from 0 and goes up to n-1, where n is the size of the array.
    // ============================================================

    // One-dimensional array
    int arr[10];

    // Two-dimensional array
    int arr2[10][20];

    cout << "1D array size: " << sizeof(arr) / sizeof(arr[0])
         << " elements" << endl;

    cout << "2D array rows: " << sizeof(arr2) / sizeof(arr2[0])
         << endl;

    cout << "2D array columns: "
         << sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;

    int marks[10]={1,2,3,45,5,6,7,8,9,10};
    // or
    int marks[10];
    marks[0] = 1;
    marks[1] = 2;
    marks[2] = 3;
    marks[3] = 45;
    marks[4] = 5;
    marks[5] = 6;
    marks[6] = 7;
    marks[7] = 8;
    marks[8] = 9;
    marks[9] = 10;

    // or 

    int marks[]={1,2,3,45,5,6,7,8,9,10};

    for(int i=0;i<10;i++){
        cout<<i <<": "<<marks[i]<<" ";
    }

}
