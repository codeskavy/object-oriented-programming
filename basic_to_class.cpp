#include<iostream>
using namespace std;

 class time 
{
                         int hrs;
                         int mins;  
                     public:
                            ::::::
                         time(int t)
                         {
                          hours= t/60;
                           mins=t%60; 
                      }         
               };
                  time T1;
                 int duration = 85;
                     T1=duration; //rhs(basic)  lhs(class)

int main() {
    return 0;
}