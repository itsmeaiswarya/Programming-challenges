#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#define intsize sizeof(int)
#define intbits intsize*8-1
class rotation
{public:int num,rot;
 int rotateleft(int,int);
 int rotateright(int,int);
 void output1();
	void output2();
 }ob;

int rotation::rotateleft(int num,int rot)
{ int droppedmsb;
  rot%=intbits;
  while(rot--)
  {droppedmsb=(num>>intbits)&1;
   num=(num<<1)|droppedmsb;
   }
  return num;
}


int rotation::rotateright(int num,int rot)
{ int droppedlsb;
  rot%=intbits;
   while(rot--)
    {droppedlsb=num & 1;
   num=(num>>1)&(~(1<<intbits));
   num=num|(droppedlsb<<intbits);
    }
  return num;

}
void rotation::output1()
{int k1;
 k1=rotateleft();
 cout<<"number after "<<rot<<"times left rotation is "<<k1<<endl;
 }
void rotation::output2()
{int k2;
 k2=rotateright();
 cout<<"number after "<<rot<<"times right rotation is "<<k2<<endl;
 }

void main()
{int num,rot;
cout<<"enter a number to rotate it left & right:";
cin>>num;
cout<<"enter number of times to rotate it left & right:";
cin>>rot;
ob.output1();
ob.output2();
}