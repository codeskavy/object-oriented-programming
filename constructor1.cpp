#include<iostream>
using namespace std;

class integer{
    public:
    int m,n;

    integer();//contructor declare or default constructor
    integer(int x,int y);//parametrized constructor
};
integer::integer(){//constructor define
        m=0;
        n=0;
    }
int main() {
    integer int1(0,100);
    integer int2=integer(0,200);
    return 0;
}