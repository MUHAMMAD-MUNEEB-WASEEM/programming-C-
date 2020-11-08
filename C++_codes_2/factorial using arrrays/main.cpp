#include <iostream>
using namespace std;
int factorial(int a);
int main()
{
    int num,result;
    cout<<"Enter an integer :";
    cin>>num;
    result=factorial(num);
    cout<<"factorial of a number is: "<<result;
}
int factorial(int a)
{
    int fact=1;
    while(a>0)
    {
        fact=fact*a;
        a--;
    }
    return fact;
}
