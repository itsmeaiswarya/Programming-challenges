#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a,b,c;
cout<<"enter the three sides of a triangle to check the type:";
cin>>a>>b>>c;
 if(a==b&&b==c)
 cout<<"it is an equilateral triangle.";
 else if(a==b||b==c||c==a)
 cout<<"it is an isoceles triangle.";
 else
 cout<<"it is a scalence triangle.";

 }