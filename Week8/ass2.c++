#include <iostream>
using namespace std;
void moneyCount(float money, int days)
{
    // int weeks;
    // cout<<"El shar have 4 weeks and week is 7 days"<<"\n";
    // cout<<"We have 2 holidays"<<"\n";
    // cout<<"Enter weeks : ";
    // cin>>weeks;
    int holidays=(days/7)*2;
    cout<<"We have  "<<holidays<<" holidays from  "<<days<<" Days"<<"\n";
    int finish=days-holidays;
    cout<<money<<" / "<<finish<<" = "<<money/finish;
}
int main()
{
    float moneyy;
    int dayss;
    cout<<"Enter money: ";
    cin>>moneyy;
    cout<<"Enter days: ";
    cin>>dayss;
    moneyCount(moneyy,dayss);
    return 0;
}