#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int num,n,newnum;
cout<<"enter a number to toggle it's bit:";
cin>>num;
cout<<"enter the 'nth' bit to be toggled:";
cin>>n;
newnum=num^(1<<n);
cout<<"bit toggled sucessfully"<<endl;
cout<<"number before toggling "<<n<<"th bit is "<<num<<endl;
cout<<"number after toggling "<<n<<"th bit is "<<newnum<<endl;
}
