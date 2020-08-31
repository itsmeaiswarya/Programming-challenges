#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int num;
cout<<"enter a no to check even or odd using bitwise operator:";
cin>>num;
  if(num&1)
   cout<<num<<" is an odd number.";
  else
   cout<<num<<" is an even number.";
}