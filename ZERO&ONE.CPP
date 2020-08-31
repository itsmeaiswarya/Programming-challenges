#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#define intsize sizeof(int)*8
void main()
{clrscr();
int num,zeros,ones;
cout<<"enter a number to count number of zeros and ones as in binary:";
cin>>num;
zeros=0;
ones=0;
 for(int i=0;i<intsize;i++)
   {if(num & 1)
   ones++;
  else
   zeros++;
   num >>= 1;
   }
 cout<<"Total zero bit in number is:"<<zeros<<endl;
 cout<<"Total one bit in number is:"<<ones<<endl;
 }
