#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int amt,n500,n100,n50,n20,n10,n5,n2,n1;
n500=n100=n50=n20=n10=n5=n2=n1=0;
cout<<"enter an amount to count notes in it:";
cin>>amt;
 if(amt>=500)
 {n500=amt/500;
 amt-=n500*500;}

 if(amt>=100)
 {n100=amt/100;
 amt-=n100*100;}

 if(amt>=50)
 {n50=amt/50;
 amt-=n50*50;}

 if(amt>=20)
 {n20=amt/20;
 amt-=n20*20;}

 if(amt>=10)
 {n10=amt/10;
 amt-=n10*10;}

 if(amt>=5)
 {n5=amt/5;
 amt-=n5*5;}

 if(amt>=2)
 {n2=amt/2;
 amt-=n2*2;}

 if(amt>=1)
 {n1=amt/1;
 amt-=n1*1;}
cout<<"total amount in notes/rupees:"<<endl<<"500:"<<n500<<endl<<"100:"
<<n100<<endl<<"50:"<<n50<<endl<<"20:"<<n20<<endl<<"10:"<<n10<<endl<<"5:"
<<n5<<endl<<"2:"<<n2<<endl<<"1:"<<n1<<endl;

}
