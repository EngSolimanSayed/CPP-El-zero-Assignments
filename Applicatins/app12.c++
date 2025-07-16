// Reversed Elements From User
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    cout << "If you want to reverse your array enter your negative number to print reverse array \n";
    int num;
    cout << "Enter num of array : ";
    cin >> num;

    int empty_array[size];
    int inp;
    cout << "Enter Value in the array   \n";
    for (int i = 4; i > num; i--)
    {
        cin >> inp;
        empty_array[i] = inp;
    }
    cout << "======================\n";

    for (int i = 0; i < size; i++)
    {
        cout << empty_array[i] << "\n";
    }

    return 0;
}