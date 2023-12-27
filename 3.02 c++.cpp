#include <iostream>
using namespace std;
int main()
{
    int i,a,b,c,d;
    for(i=1000;i<=9999;i++)
    {
        a=i%10;
        b=(i/10)%10;
        c=(i/100)%10;
        d=i/1000;
        if((a==d) && (b==c))
            cout<<i<<endl;
    }
}



