#include <iostream>
#include<string>
#include<sstream>
using namespace std;
string find_diff(string stri,string strt);
int main()
{
    string str;
    cout<<"enter a positive number in string:";
    cin>>str;
    string str1;
    cout<<"enter a second positive number in string:";
    cin>>str1;
    find_diff(str,str1);

}
string find_diff(string stri,string strt)
{
    int x=0,y=0,difference;
    stringstream read(stri);
    read>>x;
    stringstream read1(strt);
    read1>>y;
    if(x>y)
    {
        difference=x-y;
    }
    else
    {
        difference=y-x;
    }
    ostringstream str2;
    str2<<difference;
    string res=str2.str();
    cout<<"subtraction = "<<res;
    return res;
}
