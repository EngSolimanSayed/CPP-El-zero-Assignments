#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> n1 = {1, 2, 3};
    vector<int> n2 = {4, 5, 6};
   vector<int> allvectors;
   allvectors.insert(allvectors.begin(),n1.begin(),n1.end());
   allvectors.insert(allvectors.end(),n2.begin(),n2.end());

    for (int i : allvectors)
    {
        cout<<i<<"\n";
    }
    return 0;
}