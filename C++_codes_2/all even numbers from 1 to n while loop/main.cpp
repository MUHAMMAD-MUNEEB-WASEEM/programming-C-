//C program to print all even numbers from 1 to n
#include <iostream>

using namespace std;

int main()
{
    int num;
    int i=1;
    cout<<"enter upper limit:"<<endl;
    cin>>num;
    cout<<"Even numbers from 1 to"<< num <<" are: "<<endl;
    while(i<=num)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
        i++;
    }
}
