#include <iostream>

using namespace std;

int main()
{
   float side1,side2,side3;
   cout<<"Enter value of no of sides:"<<endl;
   cin>>side1>>side2>>side3;
   if((side1+side2)>side3 && (side2+side3)>side1 && (side1+side3)>side2)
   {
       cout<<"Triangle is valid!"<<endl;
   }
   else
   {
       cout<<"Triangle is invalid!"<<endl;
   }
}
