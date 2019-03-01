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
    int b[n];
    i=0;
    do
    {
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
           b[d]=b[d]+1;
           b[c]=0;
       }
    }
    while(c!=0||d!=0);
    i=0;
    j=0;
    do
    {
       if(b[i]==(n-1))
       {
           printf("%d\n",i);
           j=1;
           break;
       }
       i=i+1;
    }
    while(i<n);
    if(j==0) printf("NOT FOUND");
}
