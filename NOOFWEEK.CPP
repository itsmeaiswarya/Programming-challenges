#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int week;
cout<<"enter week number to know the day:";
cin>>week;
if(week==1)
 cout<<"monday";
else if(week==2)
 cout<<"tuesday";
else if(week==3)
 cout<<"wednesday";
else if(week==4)
 cout<<"thursday";
else if(week==5)
 cout<<"friday";
else if(week==6)
 cout<<"saturday";
else if(week==7)
 cout<<"sunday";
else
 cout<<"invalid, enter a number between 1 to 7";
 }