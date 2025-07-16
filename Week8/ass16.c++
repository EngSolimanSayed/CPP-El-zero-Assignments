#include <iostream>
using namespace std;
int books(int Sbooks, int Mbooks, int Lbooks, int shelves)
{
    int areaSbooks = Sbooks * 2;//10*2=20
    int areaMbooks = Mbooks * 4;//4*4=16
    int areaLbooks = Lbooks * 6;//3*6=18
    int areashelves = shelves * 20;//4*20=80
    int areaBooks = areaSbooks + areaMbooks + areaLbooks;//20+16+18=54
    if (areaBooks < areashelves)
    {
        return areashelves - areaBooks;//80-54=26
    }
    else
    { 
        return 0;
    }
}
int main()
{
    cout << books(10, 4, 3, 4) << "\n";
    cout << books(10, 4, 3, 2) << "\n";
    return 0;
}