#include<iostream>
using namespace std;


int main() {

    int x=1;
    int y=2;
    try{
        if(x)
        throw 10;

        if(y)
        throw 20;
    }

    catch(int e){

        cout<<"error";
    }
    return 0;
}