#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int add(vector<int> numbers)
{
    int sum = 0;
    for (int n : numbers)
    {
        sum += n;
    }
    return sum;
}
int main()
{
    vector<int> numbersone={10,20,30};
    vector<int> numberstwo={5,15,25};
    cout<<add(numbersone)<<"\n";
    cout<<add(numberstwo)<<"\n";
    return 0;
}