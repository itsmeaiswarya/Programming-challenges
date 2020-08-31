#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int year;
cout<<"enter an year to check leap year or not:";
cin>>year;
 if(((year%4==0)&&(year%100!=0))|(year%400==0))
    cout<<year<<" is a leap year.";
 else
    cout<<year<<" is not a leap year.";
 }