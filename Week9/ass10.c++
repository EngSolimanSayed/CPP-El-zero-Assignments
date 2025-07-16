#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> numbers(100,1000);
    cout<<numbers.at(0)<<"\n";
    cout<<numbers.at(99)<<"\n";
    return 0;
}