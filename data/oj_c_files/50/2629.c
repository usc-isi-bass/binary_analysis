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
       int n;
       int a[12],i,j,s,k;
       scanf("%d",&n);
       a[0]=0;
       a[1]=31;
       a[2]=28;
       a[3]=31;
       a[4]=30;
       a[5]=31;
       a[6]=30;
       a[7]=31;
       a[8]=31;
       a[9]=30;
       a[10]=31;
       a[11]=30;
       for(i=1;i<=12;i++)
       {
                  s=13;
                  for(j=1;j<=i;j++)
                  {
                       s=s+a[j-1];
                  }
                  k=s-1+n;
                  if(k%7==5)
                  printf("%d\n",i);                  
      }
       
}
