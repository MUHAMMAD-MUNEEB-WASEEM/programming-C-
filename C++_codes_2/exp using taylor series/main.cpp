/*concept:1!x2=2!
          2!x3=3!
          70!x71=71!*/
//https://www.youtube.com/watch?v=APVhIIN4zJ8
#include <iostream>
using namespace std;
int main()
{
    float power;//power=x
    int acc,i;//acc=no of terms
    cout<<"Enter a value whose exp need to be evaluated:";
    cin>>power;
    cout<<"Enter no of terms for evaluation:";
    cin>>acc;
    float answer=1;//initially only 1 is present in series of exp
    float variable=1;/*this is a factor which helps in increasng power of x by
                        multiplying x/power with it*/
    for(i=1;i<=acc;i++)
    {
        variable=(variable*power)/i;/*(1*x^1)/1 so variable=x/1 now second term
                                    =((x/1)*x)(i or 2=)=x^2/2! as in intro above*/
        answer=answer+variable;//as ans =1 so this means 1 + above calculated variable
    }
    cout<<"Result is "<<answer;
}

