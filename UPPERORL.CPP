#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{clrscr();
char ch;
cout<<"enter an alphabet:";
cin>>ch;
 if(isupper(ch))
   cout<<ch<<" is uppercase.";

 else if(islower(ch))
   cout<<ch<<" is lowercase.";

 else
   cout<<ch<<" is not an alphabet.";

}