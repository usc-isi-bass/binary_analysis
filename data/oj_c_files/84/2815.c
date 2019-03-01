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
{int n,i,j,t,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=n-1;j>0;j--)
if(a[j]>a[j-1])
{t=a[j];
a[j]=a[j-1];
a[j-1]=t;}
printf("%d\n",a[0]);
for(j=n-1;j>1;j--)
if(a[j]>a[j-1])
{t=a[j];
a[j]=a[j-1];
a[j-1]=t;}
printf("%d",a[1]);

}