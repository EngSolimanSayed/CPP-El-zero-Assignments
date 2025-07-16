#include <iostream>
using namespace std;
int calculate(int num1, int num2, string op = "a")
{
    int result;
    if (op == "a" || op == "addition")
    {
        result = num1 + num2;
    }
    else if (op == "s" || op == "subtract")
    {
        result = num1 - num2;
    }
    else if (op == "m" || op == "multiply")
    {
        result = num1 * num2;
    }
    else
    {
        result = 0;
    }
    return result;
}
int main()
{
    cout << calculate(10,20)<<"\n";
    cout << calculate(10,20,"a")<<"\n";
    cout << calculate(10,20,"s")<<"\n";
    cout << calculate(10,20,"subtract")<<"\n";
    cout << calculate(10,20,"multiply")<<"\n";
    cout << calculate(10,20,"m")<<"\n";
    cout << calculate(10,20,"Invalid")<<"\n";
    return 0;
}