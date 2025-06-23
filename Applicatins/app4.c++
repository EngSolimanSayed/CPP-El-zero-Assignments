
// APP2 =>>Find Greatest number

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << "Enter num3: ";
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << "numer " << num1 << "  is the greatest number";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "numer " << num2 << "  is the greatest number";
    }
    else
    {
        cout << "numer " << num3 << "  is the greatest number";
    }
    return 0;
}