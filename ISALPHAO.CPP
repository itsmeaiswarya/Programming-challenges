#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{clrscr();
char ch;
cout<<"enter a character:";
cin>>ch;
 if(isalpha(ch))
  cout<<ch<<" is an alphabet";
 else
  cout<<ch<<" is not an alphabet";
}