#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define intsize sizeof(int)*8
void main()
{ clrscr();
int num,index;
 int bin[intsize];
 cout<<"enter any number:";
 cin>>num;
 cout<<"number entered:"<<num<<endl;
 index=intsize-1;
  while(index>=0)
   { bin[index]=num&1;
     index--;
     num>>=1;
     }
     cout<<"it's binary is:";
  for(int i=0;i<intsize;i++)
   {cout<<bin[i];
   }
}