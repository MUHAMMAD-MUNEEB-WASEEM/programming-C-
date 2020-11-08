#include <iostream>

using namespace std;

int main()
{
    int hrs;
    float rate,salary;
    cout<<"Enters hours worked(-1 to end):";
    cin>>hrs;
    while(hrs>0)
        {
            cout<<"Enter hourly rate of employee:";
            cin>>rate;
            if(hrs<=40)
    {
        salary=hrs*rate;
    }
    else if(hrs>40)
    {
        salary=hrs*rate+(hrs-40)*rate*0.5;
    }

    cout<<"Salary is "<<salary<<" Rs. "<<endl;
    cout<<"Enters hours worked(-1 to end):";
    cin>>hrs;
        }

}
