#include <iostream>
using namespace std;
int alireza(int n);
int main()
{
    int i;
    for(i=1000;i<=9999;i++)
        if(alireza(i)==1)
            cout<<i<<endl;
}
//********************
int alireza(int n)
{
    if((n%10==n/1000)&&((n/100)%10==(n/10)%10))
        return 1;
    else
        return 0;
}


