//arrange elements in ascending order using insertion sort
// here i am using array method
#include <iostream>

using namespace std;


int main()
{
    int a[10] = {10,30,50,40,60,70,80,20,100,90,};
    int temp,pos;
    for (int i=1;i<10;i++)//insertion sort starts from index 1
    {
        temp=a[i];
        pos=i;
        while((pos>0) && (a[pos-1]>temp))
        {
            a[pos]=a[pos-1];
            pos--;
        }

    a[pos]=temp;
    }// initially we use pos=i which means that a[pos]=a[i]=temp and temp=a[i]. this helps in printing
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<"\t";
    }

}
