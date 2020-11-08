//C program to print all even numbers from 1 to n
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter upper limit:"<<endl;
    cin>>num;
    cout<<"Even numbers from 1 to"<< num <<" are: "<<endl;
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
}
