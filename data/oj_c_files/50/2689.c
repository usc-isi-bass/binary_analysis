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

main()
{
   int b[12],c[12],i,k,w;
   scanf("%d",&w);
   for(i=0;i<12;i++)
   {
     if(i==0||i==2||i==4||i==6||i==7||i==9||i==11)b[i]=31;
     else
       {
         if(i==1)b[i]=28;
         else b[i]=30;
       }
   }
   c[0]=14;
   for(i=0;i<12;i++)
   {  
     if((c[i]+w)%7==0)
     {printf("%d\n",i+1);}
     c[i+1]=c[i]+b[i];
   }
   } 
