#include<iostream.h>
#include<conio.h>
#include<limits.h>
#include<stdio.h>
void main()
{clrscr();
int num,count;
cout<<"enter a number to check it's leading zero:";
cin>>num;
count=0;
 while (!(num&(~INT_MAX)))
  {count++;
   num<<=1;
    }
cout<<"total number of leading zero is "<<count;

 }