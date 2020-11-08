#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double n,root,counter=0;
    cout<<"Enter number of which root to be evaluated:";
    cin>>n;
    root=n/2.0;
    while(fabs(root*root-n)>0.0001)
    {
        root=root-(root*root-n)/(2*root);
        counter++;
    }
    cout<<"Root of "<<n<<" is "<<root;
}
