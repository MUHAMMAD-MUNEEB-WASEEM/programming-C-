//C program to find sum of even numbers from 1 to n
#include <iostream>

using namespace std;

int main()
{
   int i,n;
   int sum=0;

   cout<<"Enter value of n:"<<endl;
   cin>>n;
   for(i=2;i<=n;i+=2)//even 2 4 6 etc
   {
       sum=sum+i;
   }
   cout<<"Sum of even numbers from 1 to "<<n<<" is "<<sum;
}
