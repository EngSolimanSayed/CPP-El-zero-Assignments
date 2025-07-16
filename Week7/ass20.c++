#include <iostream>
using namespace std;
int main(void)
{
    string names[] = {"osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "salwa"};
    int namesSize = end(names) - begin(names);
    for (int i = 0; i < namesSize; i++)
    {
        if (size(names[i]) == 5)
        {
            cout << names[i] << "\n";
        }
    }
    return 0;
}