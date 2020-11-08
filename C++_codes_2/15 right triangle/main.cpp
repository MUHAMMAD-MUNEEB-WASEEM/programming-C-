#include <iostream>
#include <cmath>

using namespace std;

int main()
{
double perp,base,hyp;
int n=3;
while(n>0)
{cout << "Enter length of three sides: ";
cin >> perp; cin >> base; cin >> hyp;
if(hyp<0 || perp<0 || base<0)
{
    cout<<"please enter positive values greater than 0";
}
else if (pow(hyp, 2.0) == pow(perp, 2.0) + pow(base, 2.0))
{
cout << "The sides represents right triangle. " << endl;
cout << endl;
}
else
{
cout << "The sides don't represents right triangle. " << endl;
cout << endl;
}
n--;
}
}
