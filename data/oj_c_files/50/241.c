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
{int n,m,j,i,k=0,sum=0,d[]={31,28,31,30,31,30,31,31,30,31,30,31},c[12],y[365],x[53];
scanf("%d",&n);
m=n;
for(i=0;i<12;i++)
{c[i]=sum+13;
sum=sum+d[i];}
for(j=0;j<365;j++)
{y[j]=j+1;}
for(i=0;i<365;i++)
{
if(m==5)
{x[k]=y[i];
k=k+1;}
m=m+1;
if(m==8)
m=1;
}
for(i=0;i<12;i++)
{for(j=0;j<53;j++)
if(c[i]==x[j])
printf("%d\n",i+1);
}
}
