#include<iostream.h>
#include<conio.h>
void main()
{
int a=0,b=1,c=0,n;
cout<<"enter no. of terms in fibonacci series"<<endl;
cin>>n;
cout<<a<<endl<<b<<endl;
  for(int i=0;i<n-2;i++)
   {c=a+b;
   cout<<c<<endl;
   a=b;
   b=c;
   }
}