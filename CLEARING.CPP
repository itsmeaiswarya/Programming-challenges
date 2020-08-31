#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int num,n,newnum;
cout<<"enter a number to clear a bit:";
cin>>num;
cout<<"enter a bit to be cleared:";
cin>>n;
newnum=num&(~(1<<n));
cout<<"Bit cleared sucessfully."<<endl;
cout<<"number before clearing "<<n<<"th bit is "<<num<<endl;
cout<<"number after clearing "<<n<<"th bit is "<<newnum<<endl;
 }