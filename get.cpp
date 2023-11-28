#include<iostream>
#include<conio.h>

using namespace std;
int main()
{

int count=0;
char c;
cout<<"Enter a string"<<endl;
cin.get(c);
while(c!='\n')
{
    cout.put(c);
    count++;
    cin.get(c);
}
cout<<"The no. of characters are =  "<<count<<"\n";
      getch();
return 0;
}
