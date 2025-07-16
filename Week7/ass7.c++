#include <iostream>
using namespace std;
int main()
{
    int result = 2;
    for (int i = 0; i < 7; i++)
    {
        cout << result << "\n";
        result *= 2;
    }
    cout << "\n==========\n";
    int sum = 2;
    int j = 0;
    while (j < 7)
    {
        cout << sum << "\n";
        sum *= 2;
        j++;
    }

    return 0;
}