#include<iostream>
#include<conio.h>
using namespace std;
class set{
    int m,n;
    public:
        void input(void);
        void display(void);
        int largest(void);
};
int set::largest(void){
    if(m>=n)
        return(m);
    else
        return(n);
}

void set::input(void){
    cout<<"input values of m and n";
    cin>>m>>n;
    
}
void set::display(void){
    cout<<"Largest value="<<largest();
}
//here we called another functions in main function
int main(){
    set a;
    a.input();
    a.display();
    return 0;
}