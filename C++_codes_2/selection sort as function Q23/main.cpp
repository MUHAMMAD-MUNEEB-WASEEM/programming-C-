#include <iostream>

using namespace std;
int * selection_Sort(int*a,int size);
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
    result=selection_Sort(arr,10);
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
int*selection_Sort(int*a,int size)
{
    int s_index;
    for(int i=0;i<size-1;i++)
    {
        s_index=i;
        for(int l_index=i+1;l_index<size;l_index++)
        {
            if(a[l_index]<a[s_index])
            {
                s_index=l_index;
            }

        }
        swap(&a[i],&a[s_index]);
    }
    return a;
}
