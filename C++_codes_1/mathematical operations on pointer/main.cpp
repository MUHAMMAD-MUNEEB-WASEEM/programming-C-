#include <iostream>

using namespace std;

int main()
{
    float num1,num2,sum,diff,product,quotient;
    float *p1, *p2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    p1=&num1;
    p2=&num2;
    cout<<"Sum = "<<(*p1)+(*p2)<<endl;;
    cout<<"diff = "<<(*p1)-(*p2)<<endl;;
    cout<<"product = "<<(*p1)*(*p2)<<endl;
    cout<<"quotient = "<<(*p1)/(*p2)<<endl;
}
