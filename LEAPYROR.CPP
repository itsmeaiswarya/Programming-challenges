#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int year;
cout<<"enter a year to check leap year or not:";
cin>>year;
(year%4==0&&year%100!=0)?cout<<"leap year":(year%400==0)?cout<<"leap year"
:cout<<"common year";
}