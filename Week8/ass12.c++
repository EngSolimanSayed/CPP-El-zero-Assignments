#include <iostream>
using namespace std;
string createurl(string protocol, string websitename, string domain, bool option = true)
{
    string url = "";
    if (option == 1)
    {
        url = protocol + "://www." + websitename + "." + domain;
    }
    else
    {
        url = protocol + "://" + websitename + "." + domain;
    }
    return url;
}
int main()
{
    cout <<createurl("https","elzero","org")<<"\n";
    cout <<createurl("https","google","com",false)<<"\n";
    cout <<createurl("https","learn","net")<<"\n";
    return 0; 
}