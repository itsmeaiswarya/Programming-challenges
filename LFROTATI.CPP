#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#define intsize sizeof(int)
#define intbits intsize*8-1




int rotateleft(int num,int rot)
{ int droppedmsb;
  rot%=intbits;
  while(rot--)
  {droppedmsb=(num>>intbits)&1;
   num=(num<<1)|droppedmsb;
   }
  return num;
}


int rotateright(int num,int rot)
{int droppedlsb;
rot%=intbits;
 while(rot--)
  {droppedlsb=num & 1;
   num=(num>>1)&(~(1<<intbits));
   num=num|(droppedlsb<<intbits);
   }
  return num;
}