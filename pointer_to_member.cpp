#include<iostream>
using namespace std;
class student{
    public:
    int first;
};

int student::*ptr=&student::first;

int main() {
    student s1;
    cout<<s1.*ptr;

    //where s1 is the object
    student*p=&s1;
    cout<<p->*ptr<<endl;
    cout<<p->first;
    return 0;
}