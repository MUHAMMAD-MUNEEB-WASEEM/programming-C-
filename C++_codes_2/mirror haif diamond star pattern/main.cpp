#include <iostream>
using namespace std;
int main()
{
   int i,j,n;
   cout<<"Enter value form no of columns:";
   cin>>n;
   for(i=1;i<=n;i++)//code for mirrored right triangle
   {
       for(j=i;j<=n-1;j++)
       {
           cout<<" ";
       }
       for(j=1;j<=i;j++)
       {
           cout<<"*";
       }
       cout<<"\n";
   }
   for(i=2;i<=n;i++)//code for inverted mirrored right triangle with 1 replaces to 2
   {
       for(j=1;j<=i-1;j++)
       {
           cout<<" ";
       }
       for(j=i;j<=n;j++)
       {
           cout<<"*";
    }
    cout<<"\n";
   }

}
