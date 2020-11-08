#include <iostream>

using namespace std;

int main()
{
  int sum=0,n;

  while(sum<=100)
  {
      cout<<"Enter an integer:";
      cin>>n;
      cout<<endl;
      sum=sum+n;
      if(sum<100)
      {
          cout<<"Running sum = "<<sum<<endl<<endl<<endl;
      }
      if(sum>100)
      {
          cout<<"Sum exceeds 100. Program terminated";
      }
  }
}

