#include <iostream>
using namespace std;
int main()
{
    int result = 0;
    int num1, num2, num3, num4, num5;
    cout << "Please Enter 5 Numbers \n";
    cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
    cout << "Enter num1 = ";
    cin >> num1;
    cout << "Enter num2 = ";
    cin >> num2;
    cout << "Enter num3 = ";
    cin >> num3;
    cout << "Enter num4 = ";
    cin >> num4;
    cout << "Enter num5 = ";
    cin >> num5;
    if (num1 < 20 && num1 % 2 == 0)
    {
        result += num1;
    }
    if (num2 < 20 && num2 % 2 == 0)
    {
        result += num2;
    }
    if (num3 < 20 && num3 % 2 == 0)
    {
        result += num3;
    }
    if (num4 < 20 && num4 % 2 == 0)
    {
        result += num4;
    }
    if (num5 < 20 && num5 % 2 == 0)
    {
        result += num5;
    }
    cout <<result;

    return 0;
}