#include<iostream>
using namespace std;

class alpha{
    int count;
    public:
    alpha(){
        count++;
        cout<<"constructor called"<<endl;
    }
    ~alpha(){
        count--;
        cout<<"destructor called"<<endl;
    }
};
int main() {
    alpha a1;
    alpha a2;
    return 0;
}