#include<iostream.h>
#include<conio.h>
#define bits sizeof(int)*8
void main()
{clrscr();
int num,msb;
cout<<"enter a number to find msb:";
cin>>num;
msb=1<<(bits-1);
if(num&msb)
cout<<"MSB of "<<num<<" is set(1)"<<endl;
else
cout<<"MSB of "<<num<<" is unset(0)"<<endl;
}

