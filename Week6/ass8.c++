#include <iostream>
#include <array>
using namespace std;
int main()
{
    array <int,3>nums={1,2,3};
    nums.fill(100);
    cout << nums[0] << "\n"; // 100
    cout << nums[1] << "\n"; // 100
    cout << nums[2] << "\n"; // 100

    return 0;
}