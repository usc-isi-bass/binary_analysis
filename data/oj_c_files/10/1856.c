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
     int n,i,j,d;
     scanf("%d",&n);
     int*p=(int*)malloc(n*sizeof(int));
     int*q=(int*)malloc(n*sizeof(int));
     for(i=0;i<n;i++) scanf("%d",&p[i]);
     q[n-1]=1;
     for(i=n-2;i>=0;i--)
     {
         q[i]=1;
         d=0;
         for(j=i+1;j<n;j++)
         {
             if(p[i]>=p[j])
               if(d<q[j]) d=q[j];
         }
         q[i]=q[i]+d;
     }
     for(i=0;i<n;i++)
     if(d<q[i]) d=q[i];
     printf("%d\n",d);
}