#include <iostream>
using namespace std;
int main()
{
    cout << 12 / 5 << "\n";
    cout << 12.f / 5 << "\n";
    cout << 12 / 5.f << "\n";
    cout << "===============================\n";
    cout << 21 % 5 << "\n";
    cout << "===============================\n";
    //post increment
    int like=0;
    cout << like++<<"\n";
    cout << like<<"\n" ;
    cout << "===============================\n";
    //pre increment
    int views=0;
    cout <<++views<<"\n";
    cout <<views<<"\n" ;
    cout << "===============================\n";
    //post decrement
    int likes=0;
    cout << likes--<<"\n";
    cout << likes<<"\n" ;
    cout << "===============================\n";
    //pre decrement
    int view=0;
    cout <<--view<<"\n";
    cout <<view;
    return 0;
}