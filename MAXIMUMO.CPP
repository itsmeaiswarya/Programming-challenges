#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a,b,c;
cout<<"enter first number:";
cin>>a;
cout<<"enter second number:";
cin>>b;
cout<<"enter third number:";
cin>>c;
 if(a>b&&a>c)
   cout<<a<<" is maximum";
 if(b>c&&b>a)
   cout<<b<<" is maximum";
 if(c>a&&c>b)
   cout<<c<<" is maximum";
}