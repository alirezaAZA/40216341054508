#include <iostream>
#define n 100
using namespace std;
int main()
{
    int i,x,alireza[n];
    for(i=0;i<=n-1;i++)
        cin>>alireza[i];
    cout<<"enter x;";
    cin>>x;
    for(i=0;i<=n-1;i++)
        if(alireza[i]==x)
        {
            cout<<"found";
            exit(0);
        }
    cout<<"not found";
}



