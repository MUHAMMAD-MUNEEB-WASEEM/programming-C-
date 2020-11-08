#include <iostream>

using namespace std;

int main()
{
    int n,counter=0;
    cout<<"Enter an integer: ";
    cin>>n;
    while(n!=0 || n>0)
    {
        n=n/10;
        ++counter;
    }
    cout<<"No of digits = "<<counter;

}
