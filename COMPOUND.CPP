#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
float p,r,t,ci;
cout<<"enter p,r,t for calculating compound intrest:";
cin>>p>>r>>t;
ci=p*(pow((1+(r/100.00)),t));
cout<<"Compound intrest="<<ci;
}
