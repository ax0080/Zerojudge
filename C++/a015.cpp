#include <iostream>

using namespace std;

int main()
{
    int row,column;

    while(cin>>row>>column)
    {
        int num[row][column];
        for(int i1=0;i1<row;i1++)
            for(int i2=0;i2<column;i2++)
            {
                cin>>num[i1][i2];
            }

        for(int i1=0;i1<column;i1++)
        {
            for(int i2=0;i2<row;i2++)
            {
                cout<<num[i2][i1]<<" ";
            }
        cout<<endl;
        }
    }
    return 0;
}