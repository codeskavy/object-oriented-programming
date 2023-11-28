#include<iostream>
using namespace std;
//it takes no paramter
// if no constructor is defined, then compiler suppkies a 
//default constructor.
class integer{
    int m,n;
    public:

    integer();
};

int main() {
    return 0;
}

//some important things to remember
//should be declared in pucblic section
//dont have a return type
//can have default arguments
//cant be inherited
//cant be virtual
// we can't refer to their address