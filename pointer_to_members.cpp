//a class member pointer can be used to declare
//using the operator ::* with the class name
#include<iostream>
using namespace std;

class A{
    public:
        int m;
    public:
        void show();

};
int A::*ip=&A::m;

int main(){
    A a1;
}


