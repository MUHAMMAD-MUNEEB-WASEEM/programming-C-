#include <iostream>

using namespace std;
int cube(int a);

int main()
{
    int c,num;
    cout<<"Enter a number of which you want a cube: ";
    cin>>num;
    c=cube(num);
    cout<<"Cube of "<<num<<" is "<<c;
}
int cube(int a)
{
    int z;
    z=a*a*a;
    return z;
}
