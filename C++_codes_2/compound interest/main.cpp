#include <iostream>

using namespace std;

int main()
{
  double balance,rate;
  int years,i=1;
  cout<<"Enter initial balance:"<<endl;
  cin>>balance;
  cout<<"Enter annual interest rate:"<<endl;
  cin>>rate;
  cout<<"Enter no of years of calculation:"<<endl;
  cin>>years;
  while(i<=years)
  {
      balance=balance+balance*(rate/100);
      i++;
  }
  cout<<"After "<<years<<" years balance will be "<<balance;
}
