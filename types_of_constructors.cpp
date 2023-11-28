#include<iostream>
using namespace std;

class integer{
    int m,n;
    public:
    integer(int x,int y);
};

integer::integer(int x,int y){
    m=x;
    n=y;
}
int main() {
    return 0;
}