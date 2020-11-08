 #include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter any number:";
    cin>>a;
    cout<<a%10;
    a=a/10;
    cout<<endl<<a%10;
    a=a/10;
    cout<<endl<<a%10;
    a=a/10;
    cout<<endl<<a;
}
