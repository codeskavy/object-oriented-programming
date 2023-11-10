#include<iostream>
using namespace std;
class item{
    int number;
    float cost;
    public:
        void getdata(int a,float b){
            number=a;
            cost=b;
        }
        void putdata(void){
            cout<<"Number:"<<number<<"n";
        }
int main(){
    item x;
    cout<<"object x"<<"n";
        x.getdata(100,299.95);
        x.putdata();
    item y;
    cout<<"object y"<<"n";
    y.getdata(200,175.5);
    y.putdata();
    return 0;
}



};