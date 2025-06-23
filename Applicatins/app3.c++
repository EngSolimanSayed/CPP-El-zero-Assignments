// APP1 =>>EVen/odd number checker
#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter your number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The number " << num << " is even";
    }
    else
    {
        cout << "The number " << num << " is odd";
    }
    return 0;
}