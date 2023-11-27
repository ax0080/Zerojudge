#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int cookie,chocolate,cake;
    while(cin>>cookie>>chocolate>>cake)
    {
            int cookietemp=cookie,caketemp=cake;
            while(cookietemp>=10&&caketemp>=2)
            {
                    chocolate++;
                    cookietemp-=10;
                    caketemp-=2;
            }
            cout<<cookie<<" 個餅乾，"<<chocolate<<" 盒巧克力，"<<cake<<" 個蛋糕。"<<endl;
    }
    return 0;
}