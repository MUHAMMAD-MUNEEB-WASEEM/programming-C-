#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	double angle1,angle2;
   float p,b,h;
   cout<<"Enter length of base:"<<endl;
   cin>>b;
   cout<<"Enter length of perp:"<<endl;
   cin>>p;
    h = sqrt( p * p + b * b );
   angle1=acos(b/h);//acos=cos^-1
   angle2=asin(p/h);//theta=sin^-1(p/h)
   cout<<"length of hyp ="<<h<<endl;
   cout<<"Angle b/w base and hyp in radians ="<<angle1<<endl;
   cout<<"Angle b/w perp and hyp in radians ="<<angle2<<endl;
   cout<<"sine values="<<" sin "<<(angle2)<<"="<<sin(angle2)<<endl;//sin/cos/tan(angle)formula
   cout<<"cosine values="<<" cos "<<(angle1)<<"="<<cos(angle1)<<endl;
}






