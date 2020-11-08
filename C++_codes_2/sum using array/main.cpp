//reads integer print those integer on screen ant then print their sum
#include <iostream>

using namespace std;

int main()
{
    int num[5];
    int i,sum=0;
    cout<<"Enter five elements:";
    for(i=0;i<5;i++)
    {
        cin>>num[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<num[i]<<endl;
        sum=sum+num[i];
    }
    cout<<"Sum is "<<sum;
}

