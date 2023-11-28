#include<iostream>
using namespace std;
class myclass{
    int data;
    public:
    myclass(int val):data(val){}

    myclass(const myclass& other):data(other.data){}
};

int main() {
    return 0;
}