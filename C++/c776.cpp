#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   int m,n;
   while(cin>>m>>n)
   {
       cout<<(2+4*n)*m-n*(m-1)<<endl;
   }
    return 0;
}