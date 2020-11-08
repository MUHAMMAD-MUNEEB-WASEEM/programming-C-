#include <iostream>

using namespace std;

int main()
{
  float angle1,angle2,angle3,sum;
  cout<<"Enter angles of triangle:"<<endl;
  cin>>angle1>>angle2>>angle3;
  sum=angle1+angle2+angle3;
  if(sum==180 && angle1!=0 && angle2!=0 && angle3!=0)
  {
      cout<<"Triangle is valid!"<<endl;
  }
  else
  {
      cout<<"triagnle is invalid!"<<endl;
  }
}
