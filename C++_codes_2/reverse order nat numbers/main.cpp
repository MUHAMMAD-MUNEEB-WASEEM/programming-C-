#include <iostream>

using namespace std;

int main()
{
    int num;
    int i=1;
    cout<<"Enter upper limit of natural numbers:";
    cin>>num;
    for(i=num;i>=1;i--)//revers order
    {
        cout<<i<<endl;
    }
}
