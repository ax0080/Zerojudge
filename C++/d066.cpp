#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int h,m;
    while(cin>>h>>m)
    {
        if(7<h&&h<17)
            cout<<"At School"<<endl;
        else if((h==7&&m>=30)/*||(h==17&&m==0)*/)
            cout<<"At School"<<endl;
        else 
            cout<<"Off School"<<endl;

    }
    return 0;
}