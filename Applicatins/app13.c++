//application about function assignment video57 
#include <iostream>
using namespace std;
void calc(int numOne, int numTwo, char op)
{
    if (op == '+')
    {
        cout << "Result is =>> " << numOne << " + " << numTwo << " = " << numOne + numTwo << "\n";
    }
    else if (op == '-')
    {
        cout << "Result is =>> " << numOne << " - " << numTwo << " = " << numOne - numTwo << "\n";
    }
    else if (op == '*')
    {
        cout << "Result is =>> " << numOne << " * " << numTwo << " = " << numOne * numTwo << "\n";
    }
    else if (op == '/')
    {
        cout << "Result is =>> " << numOne << " / " << numTwo << " = " << numOne / numTwo << "\n";
    }
    else if (op == '%')
    {
        cout << "Result is =>> " << numOne << " % " << numTwo << " = " << numOne % numTwo << "\n";
    }
}
int main()
{
    int num1, num2;
    char op;
    cout << "Enter The First Number: ";
    cin >> num1;
    cout << "Enter The Second Number: ";
    cin >> num2;
    cout << "Enter your operation: ";
    cin >> op;
    calc(num1,num2,op);

    return 0;
}