#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
 int y1,y2,m1,m2,d1,d2,x,n1,n2,i;
 scanf("%d%d%d",&y1,&m1,&d1);
 scanf("%d%d%d",&y2,&m2,&d2);
 if(y1==y2 && m1==m2) x=abs(d1-d2);
 if(y1==y2 && m1!=m2)
  {
    if((y1% 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
     {
       if(m1==1) n1=d1;     if(m2==1) n2=d2;
       if(m1==2) n1=d1+31;  if(m2==2) n2=d2+31;
       if(m1==3) n1=d1+60;  if(m2==3) n2=d2+60;
       if(m1==4) n1=d1+91;  if(m2==4) n2=d2+91;
       if(m1==5) n1=d1+121; if(m2==5) n2=d2+121;
       if(m1==6) n1=d1+152; if(m2==6) n2=d2+152;
       if(m1==7) n1=d1+182; if(m2==7) n2=d2+182;
       if(m1==8) n1=d1+213; if(m2==8) n2=d2+213;
       if(m1==9) n1=d1+244; if(m2==9) n2=d2+244;
       if(m1==10)n1=d1+274; if(m2==10)n2=d2+274;
       if(m1==11)n1=d1+305; if(m2==11)n2=d2+305;
       if(m1==12)n1=d1+335; if(m2==12)n2=d2+335;
       }
     else
      {
       if(m1==1) n1=d1;     if(m2==1) n2=d2;
       if(m1==2) n1=d1+31;  if(m2==2) n2=d2+31;
       if(m1==3) n1=d1+59;  if(m2==3) n2=d2+59;
       if(m1==4) n1=d1+90;  if(m2==4) n2=d2+90;
       if(m1==5) n1=d1+120; if(m2==5) n2=d2+120;
       if(m1==6) n1=d1+151; if(m2==6) n2=d2+151;
       if(m1==7) n1=d1+181; if(m2==7) n2=d2+181;
       if(m1==8) n1=d1+212; if(m2==8) n2=d2+212;
       if(m1==9) n1=d1+243; if(m2==9) n2=d2+243;
       if(m1==10)n1=d1+273; if(m2==10)n2=d2+273;
       if(m1==11)n1=d1+304; if(m2==11)n2=d2+304;
       if(m1==12)n1=d1+334; if(m2==12)n2=d2+334;
       }
     x=abs(n1-n2);
  }
 if(y1!=y2)
 {
  x=0;
  for(i=y1;i<=(y2-1);i++)
   {
     if((i% 4 == 0 && i% 100 != 0) || (i% 400 == 0))
      x=x+366;
     else
      x=x+365;
    }  
  if((y1% 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
     {
       if(m1==1) n1=d1;     
       if(m1==2) n1=d1+31;  
       if(m1==3) n1=d1+60;  
       if(m1==4) n1=d1+91;  
       if(m1==5) n1=d1+121; 
       if(m1==6) n1=d1+152; 
       if(m1==7) n1=d1+182; 
       if(m1==8) n1=d1+213; 
       if(m1==9) n1=d1+244; 
       if(m1==10)n1=d1+274; 
       if(m1==11)n1=d1+305; 
       if(m1==12)n1=d1+335; 
       }
  else
      {
       if(m1==1) n1=d1;     
       if(m1==2) n1=d1+31;  
       if(m1==3) n1=d1+59; 
       if(m1==4) n1=d1+90;  
       if(m1==5) n1=d1+120; 
       if(m1==6) n1=d1+151; 
       if(m1==7) n1=d1+181; 
       if(m1==8) n1=d1+212; 
       if(m1==9) n1=d1+243; 
       if(m1==10)n1=d1+273; 
       if(m1==11)n1=d1+304; 
       if(m1==12)n1=d1+334; 
       }
  if((y2% 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
     {
       if(m2==1) n2=d2;
       if(m2==2) n2=d2+31;
       if(m2==3) n2=d2+60;
       if(m2==4) n2=d2+91;
       if(m2==5) n2=d2+121;
       if(m2==6) n2=d2+152;
       if(m2==7) n2=d2+182;
       if(m2==8) n2=d2+213;
       if(m2==9) n2=d2+244;
       if(m2==10)n2=d2+274;
       if(m2==11)n2=d2+305;
       if(m2==12)n2=d2+335;
       }
  else
      {
       if(m2==1) n2=d2;
       if(m2==2) n2=d2+31;
       if(m2==3) n2=d2+59;
       if(m2==4) n2=d2+90;
       if(m2==5) n2=d2+120;
       if(m2==6) n2=d2+151;
       if(m2==7) n2=d2+181;
       if(m2==8) n2=d2+212;
       if(m2==9) n2=d2+243;
       if(m2==10)n2=d2+273;
       if(m2==11)n2=d2+304;
       if(m2==12)n2=d2+334;
       }
  x=x+n2-n1;
  }
 printf("%d",x);
 return 0;
}