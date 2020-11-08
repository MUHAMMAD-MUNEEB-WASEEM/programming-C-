#include <iostream>

using namespace std;

int main()
{
    int i,j,k,a;
    for(i=1;i<=4;i++)
    {
        for(j=4-i;j>=1;j--)
        {

            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<k;
        }
        for(a=i-1;a>=1;a--)
        {
            cout<<a;
        }
        cout<<endl;
    }
}

