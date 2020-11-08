//exctracting digit from int with vector
#include <iostream>
#include<vector>

using namespace std;

int main()
{
   vector<int>a;
   int n,counter=0;
   cout<<"Enter an integer:";
   cin>>n;
   while(n>0)
   {
       a.push_back(n%10);
       n=n/10;
       counter++;
   }
   for(int i=a.size()-1;i>=0;i--)
   {
       cout<<a[i]<<"\t";
   }
   cout<<"\nvalue of counter = "<<counter;
}
