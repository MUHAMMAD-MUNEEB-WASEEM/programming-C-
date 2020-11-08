#include <iostream>
using namespace std;
 int * insertion_Sort(int*a,int size);


int main()
{
    int arr[10];
    cout<<"Enter:";
    for(int c=0;c<10;c++)
    {
        cin>>arr[c];
    }

    int * result;
    result=insertion_Sort(arr,10);
    for(int i=1;i<10;i++)
    {
        cout<<result[i]<<"\t";
    }
}
int * insertion_Sort(int*a,int size)
{
    int temp,pos;
    for(int i=1;i<size;i++)
    {
         temp=a[i];
         pos=i;
    while((pos>0)&&(a[pos-1]>temp))
    {
        a[pos]=a[pos-1];
        pos--;
    }
    a[pos]=temp;
    }
    return a;
}


