#include <iostream>
using namespace std;
int main()
{
   int i,j,n;
   cout<<"Enter no of rows:";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       for(j=i;j<=n-1;j++)
       {
           cout<<" ";
       }
       for(j=1;j<=(2*i-1);j++)
       {
           cout<<"*";
       }
       cout<<"\n";
   }
   for(i=2;i<=n;i++)
   {
       for(j=1;j<=i-1;j++)
       {
           cout<<" ";
       }
       for(j=1;j<=2*n-(2*i-1);j++)
       {
           cout<<"*";
       }
       cout<<"\n";
   }
}

