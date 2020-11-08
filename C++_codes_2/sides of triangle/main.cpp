#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    int n=3;
    while(n>0)
    {
    cout<<"Enter length of three sides:";
    cin>>a>>b>>c;
        if(a+b>c && a+c>b && b+c>a)
    {
        cout<<"They are sides of triangle."<<"\n"<<endl;
    }
    else
    {
        cout<<"They are not sides of triangle"<<"\n"<<endl;
    }
    n--;
    }


}
