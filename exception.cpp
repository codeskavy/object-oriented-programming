#include<iostream>
using namespace std;


int main() {
    try{
        throw 10;
    }
    catch(int e){
        cout<<"We have a problem"<<endl;
    }
    return 0;
}