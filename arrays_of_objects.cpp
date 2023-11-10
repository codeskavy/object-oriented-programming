#include<iostream>
using namespace std;
class employee{
    char name[30];
    float age;

    public:
        void getdata(void);
        void putdata(void);
};

int main(){
    employee manager[3];
    employee clerk[15];
    employee worker[75];
}