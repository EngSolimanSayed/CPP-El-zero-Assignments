#include <iostream>
using namespace std;
int main()
{
    /*
  We Need To Use This Operators In Solutions
  - &&
  - >=
  - <=
  - >
  - <
  - ==
  - !
  - ||
*/

    int a = 10;
    int b = 25;
    int c = 15;

    cout << (a < b) << "\n";          // True=1
    cout << (c > a) << "\n";          // True=1
    cout << (a + c == b) << "\n";     // True=1
    cout << (c > a) << "\n";          // True=1
    cout << (c < b) << "\n";          // True=1
    cout << (b > a && b > c) << "\n"; // True=1
    cout << !(a > b) << "\n";         // True=1
    cout << (a < b || b < a) << "\n"; // True=1
    return 0;
}