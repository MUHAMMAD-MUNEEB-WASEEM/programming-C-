#include <iostream>
#include<cmath>


using namespace std;
int fact(int a);
int main()
{
    double x,res=1;
    int acc,i;
    cout << "Enter a function whose exponential needs to be evaluated:" << endl;
    cin>>x;
    cout<<"Enter no of terms:";
    cin>>acc;
    for(int i=1;i<acc;i++)
    {
        res=res + pow(x,i)/fact(i);
    }
    cout<<"Result ="<<res;
}
int fact(int a)
{
    int factorial=1;
    while(a>0)
    {
        factorial=factorial*a;
        a--;
    }
    return factorial;
}
