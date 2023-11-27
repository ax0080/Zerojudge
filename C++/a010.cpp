#include <iostream>
using namespace std;
int main()
{
   int a;
 while(cin>>a)
 {
     int b=2,c=1;
     while(b<=a)
     {
      if(a%b==0)
      {
         a=a/b;
         cout<<b;
        while(a%b==0)
        {
         a=a/b;
         c++;
        }
        if(c!=1)
         cout<<"^"<<c;

         c=1;
         if(b!=a&&a!=1)
            cout<<" * ";
      }
      else
        b++;
     }
      cout<<endl;
 }

    return 0;
}