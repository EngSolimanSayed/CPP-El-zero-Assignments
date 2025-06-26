#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School";
    cout << fName << mName << lName << "\n";
    // cout <<strcat(fName,mName,lName);
    cout << fName + mName + lName<<"\n";
    cout << fName.append(mName).append(lName);

    return 0;
}