#include <iostream>

using namespace std;

int main()
{
   float x=2.5;
   int y=10;
    for(int i=1;i<5;i++)//counter runs 4 times
        {
            cout<<"x="<<x<<"\ty="<<y<<endl;//initially given values of x and y would print
            x=x*10.0;//after that the values substitute in these formulas and print output
            y=y+5;
        }
}
