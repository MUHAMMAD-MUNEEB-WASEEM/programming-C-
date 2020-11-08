#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,b,c;
    float D,x1,x2;
    cout<<"Enter coefficients of a b and c:"<<endl;
    cin>>a>>b>>c;
    D=abs((b*b)-(4*a*c));
    cout<<"discriminant="<<D<<endl;
    x1=(-b+(sqrt((b*b)-(4*a*c)))/(2*a));
    x2=(-b-(sqrt((b*b)-(4*a*c)))/(2*a));
    cout<<"Roots of the equation "<<a<<"x^2"<<" + "<<b<<"x"<<" + "<<c<<" are "<<": x1 = "<<x1<<" , "<<" x2 = "<<x2<<endl;

}

