//C program to find sum of odd numbers in given range
#include <iostream>

using namespace std;

int main()
{
   int i,n,lowerlimit,upperlimit;
   int sum=0;

   cout<<"Enter value of lower limit:"<<endl;
   cin>>lowerlimit;
   cout<<"Enter value of upper limit:"<<endl;
   cin>>upperlimit;
   if(lowerlimit%=0)
   {
       lowerlimit++;
   }

   for(i=lowerlimit;i<=upperlimit;i+=2)//even 1 3 5 etc
   {
       sum=sum+i;
   }
   cout<<"Sum of odd numbers from"<<lowerlimit<<" to "<<upperlimit<<" is "<<sum;
}
