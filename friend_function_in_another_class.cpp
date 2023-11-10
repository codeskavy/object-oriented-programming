#include<iostream>
using namespace std;
class X{
    int fun1();//member function of X;
};
class Y{
    friend int X::fun1();
};


#include<iostream>
using namespace std;


int main() {
    return 0;
}