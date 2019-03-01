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
int a[300],b[300],i,j=0,n;
int eva(int x,int y,int b[]);
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d ",&a[i]);
for(i=0;i<n;i++)
{
if(eva(a[i],j,b))    {b[j]=a[i];j=j+1;}
}
for(i=0;i<j-1;i++)
printf("%d,",b[i]);
printf("%d",b[j-1]);
}

int eva(int x,int y,int b[])
{int i;
for(i=0;i<y;i++)
if (x==b[i]) {return(0);break;}
 return(1);
}