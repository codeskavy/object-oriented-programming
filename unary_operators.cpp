#include<iostream>
using namespace std;

class space{
    int x,y,z;
    void getdata(int a, int b ,int c);
    void display(void);
    void operator-();
};
void space::getdata(int a,int b, int c)
{
    x=a;
    y=b;
    z=c;
}

void space::display(void)
{
	cout<<x <<"   ";
	cout<<y <<"   " ;
	cout<<z <<"\n";
}

void space::operator-()
{
    x= -x;  
    y= -y; 
    z= -z;
} 

int main() {
    return 0;
}