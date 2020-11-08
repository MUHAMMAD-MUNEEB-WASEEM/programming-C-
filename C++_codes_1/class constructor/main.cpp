#include <iostream>

using namespace std;
class line
{public:
    void setlength(double l);
    double getlength();
    line();
private:
    double length;
};
line::line()
{
    cout<<"A constructor has been created!"<<endl;
}
double line::getlength()
{
    return length;
}
void line::setlength(double l)
{
    length=l;
}


int main()
{
    line a;
    a.setlength(4.5);
    cout<<"Length of line is :"<<a.getlength();
}
