#include <iostream>
using namespace std;
int main()
{
    int alireza[10][10];
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
            alireza[i][j]=(i+1)*(j+1);
    }
    for(int i=0;i<=9;i++)
        cout<<alireza[i][5]<<endl;
}



