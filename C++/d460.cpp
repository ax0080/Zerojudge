#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int y;
    while(cin>>y)
    {
        if(y<=5)
            cout<<"0"<<endl;
        else if(y<=11)
            cout<<"590"<<endl;
        else if(y<=17)
            cout<<"790"<<endl;
        else if(y<=59)
            cout<<"890"<<endl;
        else
            cout<<"399"<<endl;

    }
    return 0;
}