#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int d,w,y,ds;
cout<<"enter no. of days:";
cin>>d;
cout<<"no. of days entered is "<<d<<"days"<<endl;
w=d/7;
cout<<"it is "<<w<<"weeks"<<endl;
y=d/365;
ds=d-((y*365));
cout<<"it is "<<y<<"years and"<<ds<<" days"<<endl;
}

