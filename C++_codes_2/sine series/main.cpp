#include <iostream>

using namespace std;

int main()
{
  int n,i;
  float sum,x,t;
  cout<<"Enter a value for sine evaluation:";
  cin>>x;
  cout<<"Enter number of terms in the summation:";
  cin>>n;
  //x=x*3.14159/180;for output in degress
  t=x;
  sum=x;
  for(i=1;i<=n;i++)
  {
      t=(t*(-1)*x*x)/(2*i*(2*i+1));
      sum=sum+t;
  }
  cout<<"Result is: "<<sum;
}
