#include <iostream>

using namespace std;

class Box
{public:
    double length;
    double width;
    double height;
};
int main()
{
    Box a;
    a.length=2;
    a.width=4;
    a.height=2;
    double vol;
    vol=a.length*a.width*a.height;
    cout<<vol;
}
