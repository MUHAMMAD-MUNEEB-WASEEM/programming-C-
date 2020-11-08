//C program to print all alphabets from a to z using while loop
#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Alphabets from a to z are:"<<endl;
    ch='a';
    while(ch<='z')
    {
        cout<<ch<<endl;
        ch++;
    }
}
