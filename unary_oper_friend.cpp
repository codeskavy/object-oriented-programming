#include<iostream>
using namespace std;

friend void operator -(space &s){
    s.x=-s.x;
    s.y=-s.y;
    s.z=-s.z;
}
int main() {
    return 0;
}