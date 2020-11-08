#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<num1<<" Greater ";
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<num2<<" Greater ";
    }
    else
    {
        cout<<num3<<" Greater ";
    }
}
