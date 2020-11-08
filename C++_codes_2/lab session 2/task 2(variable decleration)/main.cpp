// You declare a variable of primitive types (int, float, char, boolean, long), or complex types (string, vector,  YourFooClass), and give it a name.
//The compiler will know how much memory it has to allocate for the given type.
//EXAMPLE:ADDITION OF TWO NUMBERS
#include <iostream>

using namespace std;
int main()
{

    int a,b,sum;
    cout<<"Input two numbers:";
    cin>>a>>b;
    sum=a+b;
    cout<<"the sum of "<<a<<" and "<<b<<" is "<<sum;
}
