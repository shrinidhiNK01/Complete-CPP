#include <iostream>
#include <string>
using namespace std;

int main(){

    // ================== PART 1: BASIC DATA TYPES ==================
    int a;
    float b = 10.5F;
    char c = 'A';
    double d = 10.5;
    long long e = 10000000000LL;
    long double f = 10.5L;

    cout << "Hello World" << endl;

    cin >> a;
    cout << a << endl;

    cout << sizeof(d) << endl;
    cout << sizeof(10.09L) << endl;

    int x = 10;
    cout << float(x) << endl;

    float y = 20;
    cout << int(y) << endl;


    // ================== INPUT BUFFER FIX ==================
    cin.ignore();  // VERY IMPORTANT after cin before getline


    // ================== PART 2: STRING INPUT ==================
    string s;
    cout << "Enter Your name" << endl;
    getline(cin, s);
    cout << "U r name is " << " " << s << endl;


    // ================== SWITCH CASE ==================
    cout << "Your Lucky number" << endl;
    int day;
    cin >> day;

    switch(day){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Lowday" << endl;
            break;
    }


    // ================== SUM OF 6 NUMBERS ==================
    cout << "Enter 6 numbers" << endl;

    int a1, b1, c1, d1, e1, f1;   // renamed to avoid conflict
    cin >> a1 >> b1 >> c1 >> d1 >> e1 >> f1;

    cout << "Sum: " << a1 + b1 + c1 + d1 + e1 + f1 << endl;


    // ================== ARRAYS ==================
    int arr[10];       // 1D array
    int arr2[10][20];  // 2D array


    // ================== STRING OPERATIONS ==================
    string s2 = "Shrinidhi";
    int len = s2.size();

    cout << s2[len - 1] << endl;   // last character


    return 0;
}