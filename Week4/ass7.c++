#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    int sum = ((a + b) * (a + b) + (a * a)) * a;
    cout << sum << "\n"; // 10000

    return 0;
}