#include <iostream>
using namespace std;
int main()
{
    int num = 2;
    while (num < 520)
    {
        if (num == 2)
        {
            num--;
        }
        cout << num << "\n";
        num = num * 2 + 2;
    }
    return 0;
}
