#include <iostream>
using namespace std;
// num1==>>totalphones
// num2==>>number of used phones
// num3==>>new phone price
// num4 ==>> amount of taxes
int pricing(int num1, int num2, int num3, int num4)
{
    int numberofnewphones = num1 - num2;//50-10=40
    int priceofnewphones = numberofnewphones * 800;//40*800=32000
    int priceofOldphones = num2 * (num3 - 200);//10*600=6000
    int totalpriceBefortax = priceofnewphones + priceofOldphones;//3200+6000=38000
    float tax = float(num4) / 100;//20/100=0.2
    int totaltaxmoney = totalpriceBefortax * tax;//38000*0.2=7600
    int totalpriceaftertax = totalpriceBefortax - totaltaxmoney;//38000-7600=30400
    return totalpriceaftertax;
}
int main()
{
    cout<<pricing(50,10,800,20)<<"\n";
    return 0;
}