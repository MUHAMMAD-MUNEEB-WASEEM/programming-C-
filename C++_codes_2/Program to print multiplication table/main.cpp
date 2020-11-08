#include <iostream>

using namespace std;

int main()
{
   int num,i;
   cout<<"Enter num of which you want multiplication table:";
   cin>>num;
   for(i=1;i<=20;i++)
   {
      cout<<num<<"*"<<i<<" = "<<num*i<<endl;
   }
}
