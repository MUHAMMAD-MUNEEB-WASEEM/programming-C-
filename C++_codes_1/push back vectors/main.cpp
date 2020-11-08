//push back insert element at the end of vector.it increases the size of vector by one
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a;
    a.push_back(8);
    a.push_back(10);
    cout<<"{";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<",";
    }
    cout<<"}";

}
