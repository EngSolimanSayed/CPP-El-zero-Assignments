#include <iostream>
using namespace std;
int beforeresult(int num, int sequence)
{
    int result = 0;
    for (int i = 0; i <= sequence; i++)
    {
        result += num;
        num--;
    }
    return result;
}
int main()
{
    cout << beforeresult(10, 5) << "\n";
    cout << "==========================\n";
    cout << beforeresult(15, 3) << "\n";

    return 0;
}