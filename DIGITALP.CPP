#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
clrscr();
char ch;
cout<<"enter a character to check alphabet, digit or special char:";
cin>>ch;
  if(isalpha(ch))
    cout<<ch<<" is an alphabet.";
  else if(isdigit(ch))
    cout<<ch<<" is a digit.";
  else
    cout<<ch<<" is a special character.";

 }
