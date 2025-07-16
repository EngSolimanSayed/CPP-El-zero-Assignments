#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50};
    vector<int>::iterator iter = numbers.begin();
    advance(iter, 2);
    cout << *iter << "\n";
     advance(iter, 2);
    cout << *iter << "\n";
     advance(iter, -3);
    cout << *iter << "\n";

    return 0;
}