#include<iostream>
using namespace std;
class Student{

    public:
    int marks;
    int rollno;
    char name[20];

    void print();


};
void Student::print(){
    cout<<"This is the member function declaration";
}

int main(){




    return 0;
}