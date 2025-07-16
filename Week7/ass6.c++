#include <iostream>
using namespace std;
int main()
{

    int result = 10;
    for (int i = 0; i < 4; i++)
    {
        cout << result << "\n";
        result *= result;
    }
    cout << "\n=========\n";
    int res = 10;
    int j = 0;
    while (j < 4)
    {
        cout << res << "\n";
        res *= res;
        j++;
    }

    return 0;
}