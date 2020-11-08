/*For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include <iostream>

using namespace std;

int main()
{
    float amt,totalbill,surcharge;
    int unit;
    cout<<"Enter units consumed:"<<endl;
    cin>>unit;
    if(unit<=50)
    {
        amt=unit*0.50;//50*050=25
    }
    else if(unit<=150)
    {
        amt=25+(unit-50)*0.75;//as amount of 50units is already mentiond i.e 25 thats why units-50
    }
    else if (unit<=250)
    {
        amt=25+75+(unit-100)*1.20;//remaining 100
    }
    else if(unit>250)
    {
        amt=25+75+120+(unit-250)*1.50;
    }
    surcharge=0.20*amt;
    totalbill=surcharge+amt;
    cout<<totalbill<<" is your total bill "<<endl;
}
