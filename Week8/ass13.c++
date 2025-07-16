#include <iostream>
using namespace std;
string greeting(string name, string gender = "unknown")
{
    string message = "Hello ";
    string statement;
    if (gender == "Male")
    {
        statement = message + "Mr " + name;
    }
    else if (gender == "Female")
    {
        statement = message + "Miss " + name;
    }
    else
    {
        statement = message + name;
    }
    return statement;
}
int main()
{
    cout <<greeting("Osama", "Male")<<"\n";
    cout <<greeting("Eman", "Female")<<"\n";
    cout <<greeting("Osama")<<"\n";
    return 0;
}