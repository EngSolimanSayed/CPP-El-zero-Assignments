#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};
   

    // Method 1
    cout << "First: " << nums.front() << endl;
    cout << "Last: " << nums.back() << endl;

    cout <<"\n================\n";

    // Method 2
    cout << "First: " << nums[0] << endl;
    cout << "Last: " << nums[nums.size() - 1] << endl;

     cout <<"\n================\n";

    // Method 3
    cout << "First: " << nums.at(0) << endl;
    cout << "Last: " << nums[nums.end() - nums.begin() - 1] << endl;

    return 0;
}
