#include<iostream>
using namespace std;

class student {
    static int count;

public:
    void getdata(int a){
        count++;
    }

    static void getcount() {
        cout << count;
    }
} a, b, c;

int student::count{3};

int main() {
    cout << student::getcount();
    return 0;
}
