#include <iostream>
using namespace std;
int main()
{
    int i,j,alireza[4][4];
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            cin>>alireza[i][j];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            cout<<alireza[i][j]<<" ";
        cout<<endl;
    }
    for(i=0;i<4;i++)
        cout<<alireza[i][j]<<" ";
}



