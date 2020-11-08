#include <iostream>
#define MAX_SIZE 100
using namespace std;

int main()
{
    int arr[3]={1,2,3};
    int *p[3];
    p[0]=&arr[0];
    p[1]=&arr[1];
    p[2]=&arr[2];
    /*cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>(p+i];
    }
    p=arr;*/
    cout<<"Print array elements on console!";
    for(int j=0;j<3;j++)
    {
        cout<<*p[j];//
    }

}
