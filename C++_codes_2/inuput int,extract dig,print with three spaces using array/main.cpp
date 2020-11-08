#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int num,i=0;
    cout<<"Enter an Integer:";
    cin>>num;
    while(num!=0)
    {
        a[i]=num%10;
        num=num/10;
        i++;
    }
    for(int x=i-1;x>=0;x--)
    {
        cout<<a[x]<<"   ";
    }
}
