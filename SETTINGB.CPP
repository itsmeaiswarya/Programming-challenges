#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int num,n,newnum;
cout<<"enter a number to set bit:";
cin>>num;
cout<<"enter bit position you want to set:";
cin>>n;
newnum=(1<<n)|num;
cout<<"bit set sucessfully."<<endl;
cout<<"number before setting "<<n<<" bit is "<<num<<endl;
cout<<"number after setting "<<n<<" bit is "<<newnum<<endl;
 }
