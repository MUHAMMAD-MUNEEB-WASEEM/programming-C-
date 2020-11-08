#include <iostream>

using namespace std;

int main()
{
int i,f=1,num;
cout<<("Enter an integer: ");
cin>>num;
  for(i=num;i>1;i--)//starts from max i.e which is input number then decrease it 1 by 1 till 1
    {               /*(i>1)=as i-- means first value print then it decreases*/
        cout<< i <<" x ";
        f=f*i;
    }
  cout<<i<<" = "<< f;//here I used <<i. if my output will not be in form like 3x2x1,then i will not used this I directly write i>=1 in for condition removing <<x from body.
}
