#include <iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cout<<"enter your numbers:";
    cin>>a>>b>>c;
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    cout<<"the max is:"<<max<<endl;
}



