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
int n,k,i,j,f=0,c=0,q[20001];
scanf("%d",&n);
for(k=0;k<n;k++)
scanf("%d",&q[k]);

printf("%d",q[0]);
for(i=1;(i<n);i++)
{c=0;
for(j=0;j<i;j++)
{if(q[j]==q[i])
 c++;
 else 
 c=c+0;}

   if(c==0)
   printf(" %d",q[i]);
   else
   f++;}
}



