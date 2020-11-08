#include <iostream>

using namespace std;

int main()
{
  float num1,num2;
  char op;
  cout<<"Enter first number:";
  cin>>num1;
  cout<<"Enter second number:";
  cin>>num2;
  cout<<"Enter operation to perform:";
  cin>>op;
  if(op=='+')
  {
      cout<<"The result is "<<num1+num2<<endl;
  }
  else if(op=='-')
  {
      cout<<"The result is "<<num1-num2<<endl;
  }
  else if(op=='*')
  {
      cout<<"The result is "<<num1*num2<<endl;
  }
  else if(op=='/')
  {
      cout<<"The result is "<<num1/num2<<endl;
  }
  else
  {
      cout<<"invalid operation";
  }
}
