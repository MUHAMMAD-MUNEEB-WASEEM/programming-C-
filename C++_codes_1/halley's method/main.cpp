#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,b,c,d;
    float xn;
    double fxn,fpxn,fdxn,InG;
    cout<<"Enter the values of coefficients of the equation:"<<endl;
    cout<<"ax^3 + bx^2 + c^x + d!"<<endl;
    cin>>a>>b>>c>>d;
    cout<<"Your equation is :"<<endl;
    cout<<a<<"x^3 + "<<b<<"x^2 + "<<c<<"x + "<<d<<endl;
    cout<<"Enter some initial guess:"<<endl;
    cin>>InG;
    xn=InG/2;
    fxn=(a*xn*xn*xn)+(b*xn*xn)+(c*xn)+d;
    fpxn;(3*a*xn*xn)+(2*b*xn)+c;
    fdxn=(6*a*xn)+(2*b);
    while((fabs(2*fxn*fpxn)/(2*pow(fpxn,2)-(fxn*fdxn)))>0.0001)
    {
        fxn=(a*xn*xn*xn)+(b*xn*xn)+(c*xn)+d;
        fpxn=(3*a*xn*xn)+(2*b*xn)+(c);
        fpxn=(6*a*xn)+(2*b);
        xn=xn-(2*fxn*fpxn)/(2*pow(fpxn,2)-(fxn*fdxn));
    }
    cout<<"The roots of the equation becomes:"<<xn;



}
