#include <iostream>
using namespace std;
int main()
{
    int i,sum=0,alireza[10];
    for(i=0;i<=9;i++)
    {
        cin>>alireza[i];
        sum=sum+alireza[i];
    }
    cout<<"sum:"<<sum<<endl;
    cout<<"average:"<<sum/10;
}



