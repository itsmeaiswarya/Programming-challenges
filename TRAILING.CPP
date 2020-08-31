#include<iostream.h>
#include<conio.h>
#include<limits.h>

void main()
{clrscr();
int num,count=0;
cout<<"enter a number to find it's trailing zero:";
cin>>num;
 while(!(num&1))
   {  count++;
      num>>=1;

   }
 cout<<"Total number of trailing zero: "<<count<<endl;

 }