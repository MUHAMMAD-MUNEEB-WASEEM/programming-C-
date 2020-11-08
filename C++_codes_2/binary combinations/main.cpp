#include<iostream>
using namespace std;
int main()
{
int a[64][6],i,j,k,d,c,n;
for(k=0;k<64;k++) //6 digit binary so 2^6 =64 is no: of combinations
{
    for(j=0;j<6;j++)
    {
        a[k][j]=0;
    }
}
for(i=0;i<64;i++)
{
    n=i;
    for(j=5;j>=0;j--)
    {
        while(n!=0)
        {
            a[i][j]=n%2;
            j--;
            n=n/2;
        }
    }
}
for(k=0;k<64;k++)
{
    for(j=0;j<6;j++)
    {
       cout<<a[k][j];
    }
    cout<<",";
}
}
