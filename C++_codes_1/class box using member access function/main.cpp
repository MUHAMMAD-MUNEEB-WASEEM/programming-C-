#include <iostream>

using namespace std;

class Box{
public:
    double length;
    double width;
    double height;
    double getvolume();
    void setlength(double len);
    void setwidth(double w);
    void setheight(double h);

};
double Box::getvolume()
{
    return length*width*height;
}
void Box::setlength(double len)
{
    length=len;
}
void Box::setwidth(double w)
{
    width=w;
}
void Box::setheight(double h)
{
    height=h;
}
int main()
{
    Box a;
    a.setlength(2);
    a.setwidth(4);
    a.setheight(2);
    cout<<"volume of the box = "<<a.getvolume();
}







