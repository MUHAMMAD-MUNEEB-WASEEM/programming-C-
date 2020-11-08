#include <iostream>

using namespace std;

int main()
{
   int num,dig1,dig2,dig3,dig4,dig5;
  cout<<"Enter five digit number:";
  cin>>num;
  dig5=num%10;
  num=num/10;
  dig4=num%10;
  num=num/10;
  dig3=num%10;
  num=num/10;
  dig2=num%10;
  num=num/10;
  dig1=num%10;
  cout<<dig1<<"   "<<dig2<<"   "<<dig3<<"   "<<dig4<<"   "<<dig5<<endl;
}
