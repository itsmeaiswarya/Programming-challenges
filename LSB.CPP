#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int num;
cout<<"enter a number:";
cin>>num;
cout<<"the number you entered is "<<num<<endl;
if(num&1)
cout<<"LSB of the number is set(1)"<<endl;
else
cout<<"LSB of the number is unset(0)"<<endl;
}