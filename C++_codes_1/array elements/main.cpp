#include <iostream>
# include <iomanip>
using namespace std;
int main()
{
    int  n [10];
    for ( int i =0; i<10 ; i++)
    {
        n[i] = i + 100;
    }
    cout<<setw(15)<<left<<"element";
    cout<<setw(15)<<left<<"values"<<endl;
    for( int i =0; i<10 ; i++)
    {
        cout<<setw(8)<<right<<i;
        cout<<setw(13)<<right<<n[i]<<endl;
    }
}
