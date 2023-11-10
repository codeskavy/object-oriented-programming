#include<iostream>
#include<conio.h>
class item{

    static int count;
    int number;
    public:
        void getdata(int a);
        {
            number=a;
            count++;
        }
        void getcount(void){
            cout<<"count";
            cout<<count<<endl;
        }
};

int item::count;
int main(){
    item a,b,c;
clrscr();
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata();
    b.getdata();
    c.getdata();

    cout<<"after reading data"<<"n";
        a.getcount();
        b.getcount();
        c.getcount();
getch();
    return 0;
}