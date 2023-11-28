#include<iostream>
using namespace std;

class X{
    public:
    int fun1();
};

class Y{
    friend int X::fun1();
};
int main() {
    return 0;
}