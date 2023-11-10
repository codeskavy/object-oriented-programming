#include<iostream>
using namespace std;
class something{
    private:
        static int s_value;
    public:
    //for static members we need to create gettera nd
    //as they acnt accessed directly
    static int getvalue(){
        return s_value;
    }
    int something::s_value{1};//initializer
};

int main(){
    cout<<something::getvalue()<<endl;
}