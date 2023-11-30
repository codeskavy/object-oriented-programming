#include<iostream>
using namespace std;

class A{
  
    int member1;
    int member2;
    public:
    A(int m1,int m2){
        member1=m1;
        member2=m2;
    }
    operator int() const{
        return member1+member2;
    }

};


class B{
    int sum;
    B(){
        sum=0;
    }
    public:
    B(const A&other){
        sum=static_cast<int>(other);
    }
    
    void display(){
        cout<<"sum in class B"<<sum;
    }

};
int main() {

    A objA(50,100);
    B objB=objA;
    objB.display();
    return 0;
}