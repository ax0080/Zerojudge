#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a,b,t;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            cin>>a>>b;
            cout<<(a/3)*(b/3)<<endl;
        }
        break;
    }
    return 0;
}