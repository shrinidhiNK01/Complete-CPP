#include<bits/stdc++.h>
using namespace std;

// Forword declaration

class Complex;
class Calci;

class Calci{
    public:
    int add(int a,int b){
        return (a+b);
    }
    // int sumRealComplex(Complex c1,Complex c2){
    //     return (c1.a+c2.a);  //now we have to get access to private members using friend and scope resolution operator
    // }
    int sumRealComplex(Complex ,Complex);
    int sumCompComplex(Complex ,Complex);

};

class Complex{
    int a,b;
    public:
   
    // Individually declaring functions as friend 
    // friend int Calci::sumRealComplex (Complex c1,Complex c2);
    // friend int Calci::sumCompComplex (Complex c1,Complex c2);

    // declaring entire class as friends 
    friend class Calci;


    void setId(int a,int b){
        this->a=a;
        this->b=b;
    }

    void getId(){
        cout<<"Your number is:"<<a<<"+"<<b<<"i"<<endl;
    }
};

int Calci::sumRealComplex(Complex c1,Complex c2){
        return ((c1.a+c2.a));  //now we have to get access to private members using friend and scope resolution operator
}
int Calci::sumCompComplex(Complex c1,Complex c2){
        return ((c1.b+c2.b));  //now we have to get access to private members using friend and scope resolution operator
}


int main(){
    Complex c1,c2;
    c1.setId(3, 4);
    c1.getId();
    c2.setId(6, 9);
    c2.getId();

    Calci c;
    c.sumRealComplex(c1,c2);
    cout<<"The sum of real part of complex number is "<<c.sumRealComplex(c1,c2)<<endl;
    cout<<"The sum of imaginary part of complex number is "<<c.sumCompComplex(c1,c2)<<endl;

}