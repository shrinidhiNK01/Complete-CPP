#pragma once
#include <bits/stdc++.h>
using namespace std;

void user_defined_header_demo() {
    // ================== PART 1: CONDITIONAL OPERATOR ==================
    int a = 10, b = 20;
    int max_val = (a > b) ? a : b;
    cout << "Max is " << max_val << endl;

    // ================== PART 2: TERNARY OPERATOR ==================
    int num;
    cout << "Enter a number: ";
    cin >> num;
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << num << " is " << result << endl;
}
