#include <iostream>

using namespace std;

int main()
{
    double operand1,operand2;
    char op;
    cout<<"Enter desired expression with spaces:";
    cin>>operand1>>op>>operand2;
    switch(op)
    {
    case '+':
        cout<<operand1<< "+" <<operand2<<" = "<<operand1+operand2;
        break;
    case '-':
        cout<<operand1<< "-" <<operand2<<" = "<<operand1-operand2;
        break;
    case '*':
        cout<<operand1<< "*" <<operand2<<" = "<<operand1*operand2;
        break;
    case '/':
        cout<<operand1<< "/" <<operand2<<" = "<<operand1/operand2;
        break;
    default:
        cout<<"Invalid operator";
    }
}
