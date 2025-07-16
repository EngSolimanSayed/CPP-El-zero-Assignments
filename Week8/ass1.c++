#include <iostream>
using namespace std;
void calcSpecial(int num1, int num2)
{
    if (num1 == num2)
    {
        cout << "Result is =>> " << num1 << " + " << num2 << " = " << num1 + num2;
    }
    else if (num1 > num2)
    {
        cout << "Result is =>> " << num1 << " - " << num2 << " = " << num1 - num2;
    }
    else if (num1 < num2)
    {
        cout << "Result is =>> " << num2 << " - " << num1 << " = " << num2 - num1;
    }
}
int main()
{
    int numOne,numTwo;
    cout<<"Enter number one : ";
    cin>>numOne;
    cout<<"Enter number two : ";
    cin>>numTwo;
    calcSpecial(numOne,numTwo);
    return 0;

}