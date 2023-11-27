#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int num,money=0;
    while(cin>>num)
    {
       while(num>=12)
        {
            num-=12;
            money+=50;
        }
        while(num>0)
        {
            num-=1;
            money+=5;
        }
        cout<<money<<endl;
    }

    return 0;
}