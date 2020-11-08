#include <iostream>
using namespace std;
int main (void)
{
    for (int i=1; i<=10; i++)
        {
             for (int j=1; j<=i; j++)
               {
                   if (j<=i)
                     {
                         cout<<"*";
                          }
                            else
                                {
                                      cout<<" ";
                                      }
                                       }
                                       cout<<endl;
                                         }
                                         cout<<endl<<endl;
                                         for (int i=1; i<=10; i++)
                                            {
                                                  for (int j=10; j>=i; j--)
                                                    {
                                                         if (j>=i)
                                                         {    cout<<"*";
                                                          }
                                                             else
                                                                {
                                                                      cout<<" ";
                                                                        }
                                                                         }
        cout<<endl;
          }
           cout<<endl<<endl;
           for (int i=1; i<=10; i++)
                {
                     for (int j=1; j<i; j++)
                        {
                              cout<<" ";
                                  }
                                      for (int j=i; j<=10; j++)
                                            {
                                                       cout<<"*";
                                                            }
                                                               cout<<endl;
                                                                  }
                                                                    cout<<endl<<endl;
                                                                       for (int i=1; i<=10; i++)
                                                                            {

                                                                                   for (int j=10-i; j>0; j--)
                                                                                     {
                                                                                           cout<<" ";
                                                                                                 }

  for (int j=1; j<=i; j++)
        {             cout<<"*";
            }
              cout<<endl;
                }
                 }
