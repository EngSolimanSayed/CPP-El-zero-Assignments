#include <iostream>
using namespace std;

int main()
{
    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

  
    cout<<"Size of a is: " <<sizeof(a)<<"\n";
    cout<<"Size of b is: " <<sizeof(b)<<"\n";
    cout<<"Size of c is: " <<sizeof(c)<<"\n";
    cout <<"\n========================\n";

    // Change ??? To Something Else To Get The Output
    cout << sizeof(c) - sizeof(b) << "\n";    // 12
    cout << sizeof(c) + sizeof(b) << "\n";    // 20
    cout << sizeof(c) * sizeof(a) << "\n";    // 32
    cout << (int)c * a << "\n";               // 5000
    cout << char(sizeof(c) * (int)c) << "\n"; // P
    
    return 0;
}