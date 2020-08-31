#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int num1,num2;
cout<<"enter a number:";
cin>>num1;
cout<<"enter another number:";
cin>>num2;
cout<<"1st number before swapping:"<<num1<<endl;
cout<<"2nd number before swapping:"<<num2<<endl;
num1^=num2;
num2^=num1;
num1^=num2;
cout<<"1st number after swapping:"<<num1<<endl;
cout<<"2nd number after swapping:"<<num2<<endl;
}