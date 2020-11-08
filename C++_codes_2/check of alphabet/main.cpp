#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter character:"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        cout<<ch<<" Alphabet ";
    }
    else
    {
     cout<<ch<<" character " ;
    }
}
