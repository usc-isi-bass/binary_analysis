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

void main()
{
 int w;
 scanf("%d\n",&w);
 int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 int b[12],i,j; // ???13??1.1??????????
  b[0]=12;
 for(i=1;i<12;i++)
   { b[i]=0;
     for(j=0;j<i;j++)
      b[i]=b[i]+a[j];      
      b[i]=b[i]+12;
    }
 for(i=0;i<12;i++)
   {
     int y;
     y=b[i]%7;
     if((y+w)%7==5)
     printf("%d\n",i+1);
    }        
 }
