#include <iostream>

using namespace std;
int*bubble_Sort(int*a,int size);
void swap(int*p1,int*p2);

int main()
{
    int arr[10];
    cout<<"Enter:";
    for(int c=0;c<10;c++)
    {
        cin>>arr[c];
    }

    int *result;
    result=bubble_Sort(arr,10);
    for(int i=0;i<10;i++)
    {
        cout<<result[i]<<"\t";
    }
}
void swap(int*p1,int*p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int*bubble_Sort(int*a,int size)
{
    bool swapped;
    for(int i=0;i<=size+1;i++)
    {
        swapped=true;
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                swapped=false;
            }
            if(swapped==false)
            {
                break;
            }

        }
    }
    return a;
}
