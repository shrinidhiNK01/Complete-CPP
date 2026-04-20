#include <bits/stdc++.h>  
using namespace std;

// ==========================================================
// ======================= STRUCT ============================
// ==========================================================

// Structure: A user-defined data type used to store multiple
// different types of data together under one name.

struct employee{
    int id;
    char name[20];
    float salary;
};

// ==========================================================
// ================= TYPEDEF STRUCT ==========================
// ==========================================================

// typedef is used to create an alias (new name) for a data type

typedef struct movie{
    int budget;
    char actor[20];
    float Collection;
} mov;  

// mov is a new name for struct movie.
// It is used to create variables easily like: mov m1;


// ==========================================================
// ======================== UNION ============================
// ==========================================================

// Union:
// It is a user-defined data type that can store different types
// of data but ONLY ONE at a time.

// Features:
// - All members share same memory location
// - Size = size of largest member
// - Only one member is valid at a time
// - Used for memory optimization

union student{
    int id;
    char name[20];
    float marks;
};


// ==========================================================
// ========================= MAIN ============================
// ==========================================================

int main(){

    // ======================================================
    // ================= STRUCT USAGE ========================
    // ======================================================

    struct employee snk;  
    // snk is a variable of type struct employee

    snk.id = 1;

    // ❌ WRONG: snk.name[0] = 'anabella';
    // Because name is a character array, not a single character
    // and 'anabella' is not a char (it's a string)

    // ✅ CORRECT:
    strcpy(snk.name, "Anabella");

    snk.salary = 50000.0;

    struct employee shru;

    shru.id = 2;

    // ❌ WRONG: shru.name[1] = 'shru';
    // Same issue as above

    // ✅ CORRECT:
    strcpy(shru.name, "Shruti");

    shru.salary = 60000.0;


    // ======================================================
    // ============= TYPEDEF STRUCT USAGE ====================
    // ======================================================

    mov m1;  
    // m1 is a variable of type mov (alias for struct movie)

    m1.budget = 1000000;

    // ❌ WRONG: m1.actor[0] = 'Shrinidhi';
    // actor is a character array → needs string copy

    // ✅ CORRECT:
    strcpy(m1.actor, "Anabella");

    m1.Collection = 5000000.0;


    // ======================================================
    // ================= UNION USAGE =========================
    // ======================================================

    union student s1;  

    // Memory is shared → each assignment overwrites previous one

    s1.id = 1;
    cout << "Union ID: " << s1.id << endl;

    // Now overwrite id
    strcpy(s1.name, "Anabella");
    cout << "Union Name: " << s1.name << endl;

    // Now overwrite name
    s1.marks = 90.0;
    cout << "Union Marks: " << s1.marks << endl;

    // ⚠️ IMPORTANT:
    // Only LAST assigned value is valid
    // Previous values become garbage / overwritten


    // ======================================================
    // ================= ENUMERATION =========================
    // ======================================================

    // Enum (Enumeration):
    // It is a user-defined data type that consists of
    // named integral constants.

    // Benefits:
    // - Improves readability
    // - Improves maintainability
    // - Represents fixed set of values

    enum Meal{breakfast, lunch, dinner};  
    // By default:
    // breakfast = 0
    // lunch = 1
    // dinner = 2

    Meal m = breakfast;

    cout << m << endl;  // prints 0

    m = lunch;
    cout << m << endl;  // prints 1

    m = dinner;
    cout << m << endl;  // prints 2


    // ======================================================
    // ================= EXTRA NOTES =========================
    // ======================================================

    // STRUCT vs UNION:

    // STRUCT:
    // - Each member has separate memory
    // - Can access all members at same time
    // - More memory usage

    // UNION:
    // - All members share same memory
    // - Only one member usable at a time
    // - Less memory usage


    // ======================================================
    // ================= RETURN ==============================
    // ======================================================

    return 0;
}