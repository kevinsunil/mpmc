#include<reg52.h>

void main()
{
  TMOD = 0x20;
  SCON = 0x50;
  TH1 = 0xFD;
  TR1= 1;
  
  while(1)
  {
    SBUF='L';
    while(!TI);
    TI =0;
    
   SBUF='A';
   while(!TI);
   TI =0;
    
    SBUF='B';
    while(!TI);
    TI =0;
    
    while(!RI);
    P1 = SBUF;
    RI = 0;
    
    while(!RI);
    P1 = SBUF;
    RI = 0;
    
    while(!RI);
    P1 = SBUF;
    RI = 0;
  }
}
