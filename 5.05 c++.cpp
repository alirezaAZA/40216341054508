#include <iostream>
using namespace std;
int complete(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
        if(n%i==0)
            sum+=i;//or sum=sum+i;
            if(sum==n)
                return(1);//or return 1;
            else
                    return(0);
}
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    if(complete(n)==1)
        cout<<"it is complete";
    else
        cout<<"it's not complete";
}


