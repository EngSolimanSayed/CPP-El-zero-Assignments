#include <iostream>
using namespace std;
int main()
{

    for (int i = 2; i < 130; i = (i * 2) + 2)
    {

        cout << i << "\n";
    }

    cout << "\n==========\n";

    int j = 2;
    while (j < 130)
    {
        cout << j << "\n";
        j = (j * 2) + 2;
    }

    return 0;
}