#include<iostream>
using namespace std;
class object{
    private:
    int data;

    public:
    object(){

    }

    void setdata(int new_data){
       data=new_data;
    }

    int getdata(){
        return data;
    }
    
}o1,o2;

inline void object::student(int new_data){


}
int main() {
   o1.setdata(56);
   o2.setdata(67);
   cout<<o1.getdata()<<endl;
   cout<<o2.getdata();
}