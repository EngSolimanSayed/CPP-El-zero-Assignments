#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers = {10, 20, 30, 40};
    cout << "First element in 4 methods" << "\n";
    cout << numbers.at(0) << "\n";
    cout << numbers.front() << "\n";
    cout << numbers[0] << "\n";
    cout << *numbers.begin() << "\n";
    cout << "=================================\n";
    cout << "last element in 4 methods" << "\n";
    cout << numbers.at(3) << "\n";
    cout << numbers.back() << "\n";
    cout << numbers.at(numbers.size()-1) << "\n";
    cout << numbers[3] << "\n";
    return 0;
}