#include <iostream>
#include<string>
#include<sstream>
using namespace std;
string find_sum(string stri,string strt);
int main()
{
    string str;
    cout<<"enter a positive number in string:";
    cin>>str;
    string str1;
    cout<<"enter a second positive number in string:";
    cin>>str1;
    find_sum(str,str1);

}
string find_sum(string stri,string strt)
{
    int x=0,y=0;
    stringstream read(stri);
    read>>x;
    stringstream read1(strt);
    read1>>y;
    int sum=x+y;
    ostringstream str2;
    str2<<sum;
    string res=str2.str();
    cout<<"Addition = "<<res;
    return res;
}
