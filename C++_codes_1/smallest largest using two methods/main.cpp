#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;

    cout << "Input three numbers: ";
    cin >> num1 >> num2 >> num3;

    if(num1 > num2 && num1 > num3)
    {
        cout << "Largest number " << num1<<endl;
    }

    if(num2 > num1 && num2 > num3)
    {
        cout << "Largest number " << num2<<endl;
    }

    if(num3 > num1 && num3 > num2)
    {
        cout << "Largest number " << num3<<endl;
    }
    if(num1<num2 && num1<num3)
    {
        cout<<"Smallest is "<<num1;
    }
    if(num2<num3 && num2<num1)
    {
        cout<<"Smallest is "<<num2;
    }
    if(num3<num1 && num3<num2)
    {
        cout<<"Smallest is "<<num3;
    }
    return 0;
}
