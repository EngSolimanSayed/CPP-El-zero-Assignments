#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {100, 200, 300, 400};
    for (int n : nums)
    {
        cout << n << "\n";
    }
    cout << "First Element Is: " << nums.front() << "\n";
    nums.push_back(500);
    cout << "Last Element Is: " << nums.back() << "\n";
    return 0;
}