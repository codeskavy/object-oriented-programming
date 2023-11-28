#include<iostream>
using namespace std;

class number{
    public:
    int num;
    int den;
    
    void show(int num,int den);


};
void opt(int a,int b,char op){
    switch (op){
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;
    }
}

    void number::show(int num,int den,int a,int b,char op){
        if(den==0)
        cout<<"invalid input";

        else if(den>num)
            opt(a,b,op);

        else
        cout<<"invalid input";
    }
int main() {
    number n1;
    number n2;
    char op;
    return 0;
}