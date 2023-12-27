#include <iostream>
#define n 100
using namespace std;
int main()
{
    int i,j,alireza[n],temp;
    for(i=0;i<=n-1;i++)
        cin>>alireza[i];
    for(i=0;i<n-1;i++)
        for(j=0;j<=n-i;j++)
            if(alireza[i]>alireza[j+1])
            {
                temp=alireza[j];
                alireza[j]=alireza[j+1];
                alireza[j+1]=temp;
            }
}



