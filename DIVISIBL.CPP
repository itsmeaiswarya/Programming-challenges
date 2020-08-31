#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int num;
cout<<"enter a number:";
cin>>num;
 if((num%5==0)&&(num%11==0))
  cout<<num<<" is divisible by 5 & 11.";
 else
  cout<<num<<" not divisible by 5 & 11.";
 }