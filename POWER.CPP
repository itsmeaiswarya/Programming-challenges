#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{ clrscr();
int x,y,a;
cout<<"enter a base number:";
cin>>x;
cout<<"enter an exponent:";
cin>>y;
a=pow(x,y);
cout<<x<<"^"<<y<<"="<<a;
}
