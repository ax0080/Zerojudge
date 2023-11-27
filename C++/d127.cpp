#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long  int round,half;
    while(cin>>round)
    {
       long int area=0;
       half=round/2;
       for(int i=1;i<half;i++)
       {
           if(i*(half-i)>area)
           {
               area=i*(half-i);
           }
       }
        cout<<area<<endl;
    }

    return 0;
}