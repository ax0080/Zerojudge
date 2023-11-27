#include <iostream>

using namespace std;

int main()
{
 int a,b,c,d,e,f;

  while(cin>>a)
  {

   while(cin>>b>>c>>d>>e&&a>0)
    {
      a--;
      if(b+d==2*c)
     {
        f=2*e-d;
          cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
     }
      else
      {
          f=e*e/d;
          cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
      }
    }

  }



    return 0;
}