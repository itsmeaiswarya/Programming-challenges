#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{clrscr();
char ch;
cout<<"enter a character:";
cin>>ch;
isalpha(ch)?cout<<"it's an alphabet":cout<<"not an alphabet";
}