#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a,b,c,sum=0;
cout<<"enter any 3 angles to check whether a valid triangle or not:";
cin>>a>>b>>c;
sum=a+b+c;
 if(sum==180 && a>0 && b>0 && c>0)
 cout<<"the triangle is valid.";
 else
 cout<<"the triangle is invalid.";

}