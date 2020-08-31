#include<iostream.h>
#include<conio.h>
#define intsize sizeof(int)*8
void main()
{clrscr();
int num,order=-1;
cout<<"enter a number to check highest order set bit:";
cin>>num;
 for(int i=0;i<intsize;i++)
  {if((num>>i)&1)
      order=i;
      }
   if(order!=-1)
    {cout<<"highest order set bit of "<<num<<" is "<<order<<endl;
    }
    else
    {cout<<"no set bit possible"<<endl;
    }
 }
