#include <iostream>

using namespace std;

int main()
{
   int i,j,n;
   cout<<"Enter value for max no of columns:";
   cin>>n;
   for(i=1;i<=n;i++)//code of right triangle pattern
   {
       for(j=1;j<=i;j++)
       {
           cout<<"*";
       }
       cout<<"\n";
   }
   for(i=2;i<=n;i++)//code of inverted right triangle pattern only in rows 1 replace to 2
   {
       for(j=i;j<=n;j++)
       {
           cout<<"*";
       }
       cout<<"\n";
   }
}
