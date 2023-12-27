#include <iostream>
using namespace std;
int main()
{
    int alireza[3][4],i,j,min,max;
    for(i=0;i<=2;i++)
        for(j=0;j<=3;j++)
            cin>>alireza[i][j];
    max=min=alireza[0][0];
    for(i=0;i<=2;i++)
        for(j=0;j<=3;j++)
        {
            if(alireza[i][j]>max)
                max=alireza[i][j];
            if(alireza[i][j]<min)
                min=alireza[i][j];
        }
    cout<<"max="<<max<<"min="<<min;
}



