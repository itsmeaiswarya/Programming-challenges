#include<iostream.h>
#include<conio.h>
#define intsize sizeof(int)*8
void main()
{clrscr();
int num,order;
cout<<"enter a number to find lowest bit:";
cin>>num;
order=intsize-1;
 for(int i=0;i<intsize;i++)
  if((num>>i)&1)
   {order=i;
    break;}
 cout<<"Lowest order set bit of "<<num<<" is "<<order<<endl;
 }