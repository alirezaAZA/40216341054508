#include <iostream>
#define n 100
using namespace std;
int main()
{
    int i,j,alireza[n],temp;
    for(i=0;i<=n-1;i++)
        cin>>alireza[i];
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(alireza[i]>alireza[j])
            {
                temp=alireza[i];
                alireza[i]=alireza[j];
                alireza[j]=temp;
            }
}



