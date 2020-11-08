#include <iostream>

using namespace std;

int main()
{
  int seclastterm=0,lastterm=1,currentterm=0,num,i;
  cout<<"Enter number of elements: ";
  cin>>num;
  for(i=1;i<=num;i++)/*counter or loop runs till given no of elements means if num=10
                        then loop runs till 10 times*/
  {
      cout<<currentterm<<" ";
      seclastterm=lastterm;//value of last term stores in second last term variable
      lastterm=currentterm;//value of current term stores in last term;
      currentterm=seclastterm+lastterm;//last term+current term(as declared in above two steps)
      /*1.in first step c.term is present which is initially 0.
      2.secondly:l.term=1 so s.term=1 after that c.term=0 so l.term=0
      3.after putting it in formula c.term=s.term+l.term=1+0=1 and thus print 1
      4.now we have 0 and 1;where 1 is c.term and 0 is l.term which means s.term=l.term=0
      and l.term=c.term=1: now c.term=s.term+c.term=1+0=1
      5.so no:0 1 1 where 1 is c.term stores in l.term and beside 1 is an another 1 stores in
      s.term so now c.term=s.term+l.term=1+1=2 so :0 1 1 2 and similarly so on...*/
  }
}
