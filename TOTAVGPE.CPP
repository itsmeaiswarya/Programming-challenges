#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int m[5],tot=0;
float avg,per;
 cout<<"enter 5 subject marks out of 100:";
  for(int i=0;i<5;i++)
  {cin>>m[i];
  }
  for(i=0;i<5;i++)
  {tot+=m[i];
  }
  avg=tot/5.0;
  per=(tot/500.0)*100;
 cout<<"Total="<<tot<<endl;
 cout<<"Average="<<avg<<endl;
 cout<<"Percentage="<<per<<endl;
 }


