#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{clrscr();
int num,flipnum;
cout<<"enter a number to flip it's bit:";
cin>>num;
flipnum=~num;
cout<<"number before flipping bit is:"<<num<<endl;
cout<<"number after flipping bit is:"<<flipnum<<endl;
}