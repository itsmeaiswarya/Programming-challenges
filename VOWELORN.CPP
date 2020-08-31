#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
char ch;
cout<<"enter a character:";
cin>>ch;
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
     cout<<ch<<" is a vowel.";

   else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
     cout<<ch<<" is a consonant.";

   else
     cout<<ch<<" is not an alphabet.";
}