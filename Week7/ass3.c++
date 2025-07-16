#include <iostream>
using namespace std;
int main()
{
    cout << "You will enter the range of sequence\n";
    int num1, num2;
    cout << "Enter The First number : ";
    cin >> num1;
    cout << "Enter The Second number : ";
    cin >> num2;
    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 =temp;
    }

    for (int i = num1 + 1; i < num2; i++)
    {
        if (i % 2 != 0)
        {
            cout << i ;
            if (i + 2 < num2)
            {
                cout << ", ";
            }
        }
    }

    return 0;
}