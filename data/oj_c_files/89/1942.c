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
    int n,i,c,d,j;
    scanf("%d",&n);
    int a[n];
    int b[n];
    i=0;
    do
    {
        a[i]=i;
        b[i]=0;
        i=i+1;
    }
    while(i<n);
    do
    {
       scanf("%d %d",&c,&d);
       if(c!=0||d!=0)
       {
           i=0;
           do
           {
               if(d==a[i])
               {
                   b[i]=b[i]+1;
                   break;
               }
               i=i+1;
           }
           while(i<n);
           i=0;
           do
           {
               if(c==a[i])
               {
                   b[i]=0;
                   break;
               }
               i=i+1;
           }
           while(i<n);
       }
    }
    while(c!=0||d!=0);
    i=0;
    j=0;
    do
    {
       if(b[i]==(n-1))
       {
           printf("%d\n",a[i]);
           j=1;
           break;
       }
       i=i+1;
    }
    while(i<n);
    if(j==0) printf("NOT FOUND");
}
