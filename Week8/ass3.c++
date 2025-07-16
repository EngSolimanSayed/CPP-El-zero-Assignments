#include <iostream>
using namespace std;
int plusnums(int numone, int numtwo);
int minusnums(int numone, int numtwo);
int divnums(int numone, int numtwo);
int main()
{
    cout << plusnums(50, 60) << "\n";
    cout << minusnums(150, 50) << "\n";
    cout << divnums(100, 5) << "\n";
    return 0;
}
int plusnums(int numone, int numtwo)
{
    return numone + numtwo;
}
int minusnums(int numone, int numtwo)
{
    return numone - numtwo;
}
int divnums(int numone, int numtwo)
{
    return numone /numtwo;
}