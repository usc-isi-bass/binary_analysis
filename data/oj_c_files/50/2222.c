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
   int n,i;
   int a[12],b[12];
   b[0]=12;
   b[1]=b[0]+31;
   b[2]=b[1]+28;
   b[3]=b[2]+31;
   b[4]=b[3]+30;
   b[5]=b[4]+31;
   b[6]=b[5]+30;
   b[7]=b[6]+31;
   b[8]=b[7]+31;
   b[9]=b[8]+30;
   b[10]=b[9]+31;
   b[11]=b[10]+30;
   b[12]=b[11]+31;
   scanf("%d",&n);
   
   for(i=0;i<12;i++)
   {
   a[i]=n+b[i]%7;
   if(a[i]>7) a[i]=a[i]-7;
   }
   
   for(i=0;i<12;i++)
   {if(a[i]==5)
   printf("%d\n",i+1);
   }
   
}