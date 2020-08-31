#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int num,n,bitstatus;
cout<<"enter a number:";
cin>>num;
cout<<"enter 'nth' bit to check:";
cin>>n;
bitstatus=(num>>n)&1;
cout<<"the "<<n<<"th bit of "<<num<<" is set to "<<bitstatus<<endl;
}

