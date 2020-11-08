#include <iostream>

using namespace std;
int max(int a,int b);
int min(int a,int b);

int main()
{
    int num1,num2,maximum,minimum;
    cout<<"Input two integers: ";
    cin>>num1>>num2;
    maximum=max(num1,num2);
    minimum=min(num1,num2);
    cout<<"Maximum and minimum between "<<num1<<" and "<<num2<<" is "<<"maximum = "<<maximum<<" minimum = "<<minimum<<endl;
}
int max(int a,int b)
{
    if(a >b )
    {
        return a;
    }
    else
    {
        return b;
    }
}
int min(int a,int b)
{
    if(a < b )
    {
        return a;
    }
    else
    {
        return b;
    }
}
