#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50, 60, 70, 80};
    vector<int>::iterator first = numbers.begin();
    vector<int>::iterator last=numbers.end()-1;
    cout <<"First is :"<<*first<<"\n";
    cout <<"last is :"<<*last<<"\n";
    return 0;
}