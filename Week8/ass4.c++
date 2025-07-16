#include <iostream>
using namespace std;

int calculation(int num1, int num2 = 200, int num3 = 150)
{
    int result;

    if (num1 == 100 && num2 == 200)
    {
        num3 = 0;
        result = num1 + num2;
    }
    else
    {
        result = num1 + num2 + num3;
    }

    return result;
}
int main()
{
    cout << calculation(50, 100, 150) << "\n";
    cout << calculation(100, 50) << "\n";
    cout << calculation(100) << "\n";
    return 0;
}