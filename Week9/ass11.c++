#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> numbers;
    vector<float> floats(100);

    numbers.resize(100,1000);
    fill(floats.begin(),floats.end(),100.50);
    
    cout<<numbers.at(0)<<"\n";
    cout<<numbers.at(99)<<"\n";

    cout<<floats.at(0)<<"\n";
    cout<<floats.at(99)<<"\n";
    return 0;
}