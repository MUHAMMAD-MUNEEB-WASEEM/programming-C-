#include <iostream>
using namespace std;
int max(int a,int b);
int main()
{
    int x,y,result1;
    cout<<"Enter values:";
    cin>>x>>y;
    result1=max(x,y);
    cout<<"Max no is: "<<result1;
}
int max(int a,int b)
{
    int maximum;
    if(a>b)
    {
        maximum=a;
    }
    else
    {
        maximum=b;
    }
    return maximum;
}


