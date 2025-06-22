#include <iostream>
using namespace std;
int main()
{
    char a = '1';
    char b = '1';
    char c = '1';
    a = 10, b = 10, c = 99;
    cout << b * c + a << "\n";
    return 0;
}