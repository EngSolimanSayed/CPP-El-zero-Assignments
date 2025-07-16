#include <iostream>
using namespace std;
int main()
{
    int index = 2;
    for (;;)
    {
        if (index >= 9)
        {
            break;
        }
        cout << index << "\n";
        index++;
    }

    return 0;
}
