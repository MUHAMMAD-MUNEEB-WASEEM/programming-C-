//C program to find sum of odd numbers in given range
#include <iostream>

using namespace std;

int main()
{
   int i,n,start,end;
   int sum=0;
    cout<<"Enter value of lower limit:"<<endl;
   cin>>start;
   cout<<"Enter value of upper limit:"<<endl;
   cin>>end;
   if(start%=0)
   {
       start++;
   }

   for(i=start;i<=end;i+=2)//even 1 3 5 etc
   {
       sum=sum+i;
   }
   cout<<"Sum of odd numbers from"<<start<<" to "<<end<<" is "<<sum;
}
