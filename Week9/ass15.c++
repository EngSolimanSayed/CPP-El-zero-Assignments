#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums={1,2,3,4,5,6,7,8};
    rotate(nums.begin(),nums.begin()+4,nums.end());
     for (int i: nums)
     {
        cout<<i<<"\n";
     }
     return 0;
     
}