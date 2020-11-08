//C program to find sum of natural numbers from 1 to n
#include <iostream>

using namespace std;

int main()
{
   int i,n;
   int sum=0;

   cout<<"Enter value of n:"<<endl;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       sum=sum+i;
   }
   cout<<"Sum of natural numbers from 1 to "<<n<<" is "<<sum;
}
