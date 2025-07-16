#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> numbers = {10, 20, 30, 40};

    numbers.pop_back(); // Method One
    for (int i : numbers)
    {
        cout << i << "\n";
    }
    cout << "=========\n";
    vector<int> numberss = {10, 20, 30, 40};

    numberss.resize(numberss.size() - 1); // Method two
    for (int o : numberss)
    {
        cout << o << "\n";
    }
    cout << "=========\n";
    vector<int> numbersss = {10, 20, 30, 40};

    numbersss.erase(numbersss.end() - 1); // Method Three
    for (int p : numbersss)
    {
        cout << p << "\n";
    }
    return 0;
}