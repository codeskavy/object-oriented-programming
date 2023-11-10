#include<iostream>
using namespace std;
class sample{
    int m;
    void read(void);

    public:
    void update(void);
    void write(void);
};
void sample::update(void){
    read();
}
int main(){
    sample s1;
    //because it is a private member.
    // s1.read();
}