#include<iostream>
using namespace std;

class counter{
    
   

    static int count;
     public:

        counter(){
            count++;
        }

        ~counter(){
            count--;
        }

        static int getinstances(){
            return count;
        }

};

int counter::count=0;
int main() {
    counter c1;
    counter c2;
    counter c3;

    cout<<"number of instances"<<counter::getinstances()<<endl;
    counter c4;
    cout<<"number of instances"<<counter::getinstances()<<endl;
    return 0;
}