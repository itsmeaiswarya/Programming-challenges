#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a,b,c;
cout<<"enter the three sides of a triangle to check valid or not:";
cin>>a>>b>>c;
 if(a+b>c)

 { if(b+c>a)

    { if(c+a>b)
      cout<<"triangle is valid.";

      else
      cout<<"triangle is invalid.";
    }
   else
   cout<<"triangle is invalid.";
 }
 else
 cout<<"triangle is invalid.";

}