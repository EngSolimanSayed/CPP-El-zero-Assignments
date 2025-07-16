#include <iostream>
using namespace std;
int main()
{
   //for loop
    for (int i = 0; i < 11; i++)
    {
        cout << i << "\n";
    }

    cout << "\n================\n";

    // while loop
    int j = 0;
    while (j<11)
    {
       cout <<j<<"\n";
       j++;
    }

    cout << "\n================\n";
    // do while
    int k = 0;
    do
    {
        cout << k << "\n";
        k++;
    } while (k < 11);

    return 0;
}