#include <iostream>

using namespace std;

int main()
{
    int array[5];
    int max,min,i;
    cout<<"Enter 5 elements:";
    for(i=0;i<5;i++)
    {
        cin>>array[i];
    }
    max=array[0];
    min=array[0];
    for(i=0;i<5;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        else if(array[i]<min)
        {
            min=array[i];
        }
    }
    cout<<"Max is "<<max<<endl;
    cout<<"Min is "<<min;
}
