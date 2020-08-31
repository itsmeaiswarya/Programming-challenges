#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a,b,c,max;
cout<<"enter a number:";
cin>>a;
cout<<"enter another number:";
cin>>b;
cout<<"enter a third number:";
cin>>c;
max=(a>b&&a>c)?a:(b>c)?b:c;
cout<<"maximum is:"<<max;
}