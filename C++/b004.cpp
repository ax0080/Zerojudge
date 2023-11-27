#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x,y,pi=4*atan(1);
    while(cin>>x>>y)
    {
        cout<<fixed<<setprecision(3)<<pi*sqrt((y*y-x*x)/4)*(y/2)<<endl;
    }
    return 0;
}