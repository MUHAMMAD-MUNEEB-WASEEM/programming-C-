//CONVERSION OF TEMPERATURE FROM CELSIUS TO FAHRENHEIT//
//FLOAT(DATA TYPE)
#include<iostream>
using namespace std;
int main()
{
    float c,f;
    cout<<"Enter temperature in centigrade:";
    cin>>c;
    f=(9.0/5.0)*c+32.0;
    cout<<"Temperature in fahrenheit is"<<"\n"<<f;
}
