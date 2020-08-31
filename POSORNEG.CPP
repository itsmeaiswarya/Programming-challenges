#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int num;
cout<<"enter a no. to check positive,negative or zero:";
cin>>num;
  if(num>0)
   cout<<num<<" is a positive number.";
  else if(num<0)
   cout<<num<<" is a negative number.";
  else
   cout<<"number is zero.";
}