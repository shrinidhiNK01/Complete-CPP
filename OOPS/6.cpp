// Friend Functions in C++
#include <iostream>
using namespace std;

class complex{
    int a ,b;
    public:
    void setId(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend complex sum(complex c1,complex c2);  //friend function declaration
    void getId(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sum(complex c1,complex c2){
    complex c3;
    c3.setId((c1.a+c2.a),(c1.b+c2.b));   //a and b are private members of class complex but we can access them in this function because this function is a friend of class complex ,for that we have to declare this function as a friend function in class complex, it will give us access to all the private members of class complex.
    return c3;
}

int main(){
    complex c1 ,c2,sum1;
    c1.setId(3, 4);
    c1.getId();
    c2.setId(5, 6);
    c2.getId();

    sum1=sum(c1,c2);
    cout<<"The sum of the two complex numbers is "<<endl;
    sum1.getId();


}

// Properties of friend functions in C++
// ==================================================
// 1. Friend functions are not member functions of the class, but they have access to the private and protected members of the class.
// 2. Friend functions are declared inside the class with the keyword 'friend' and defined outside the class.
// 3. Friend functions can be called like normal functions, without using any object of the class.
// 4. Friend functions can be declared in multiple classes, and they can access the private and protected members of all those classes.
// 5. Friend functions can be used to implement operator overloading, where the operator is defined as a friend function to access the private members of the class.
// 6. Friend functions can be used to implement non-member functions that need access to the private members of the class, such as input/output functions or utility functions.
// 7. Friend functions can be declared as inline functions, which can improve performance by reducing function call overhead.
// 8. Friend functions can be declared as template functions, which can be used to create generic functions that can work with different types of data.
// 9. Friend functions can be declared as static functions, which can be called without an object of the class, but they still have access to the private members of the class.
// 10. Friend functions can be declared as const functions, which can be called on const objects of the class, but they cannot modify the private members of the class.
// Note: Friend functions should be used judiciously, as they can break encapsulation and make the code harder to maintain. It is generally recommended to use member functions or non-member functions instead of friend functions whenever possible.
// In the above code, we have defined a class 'complex' that represents a complex number with two private members 'a' and 'b'. We have declared a friend function 'sum' that takes two complex numbers as input and returns their sum as a complex number. The friend function can access the private members of the class to perform the addition. In the main function, we create two complex numbers, set their values, and then call the friend function to get their sum.