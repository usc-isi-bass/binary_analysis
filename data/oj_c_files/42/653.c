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
int n,m,i,k,l,j=0,*p;
int a[100000];
scanf("%d",&n);
p=a;
for(i=0;i<n;i++)
scanf("%d",p++);
p=a;
scanf("%d",&m);
for(i=0;i<n-j;i++)
{
if(*(p+i)==m)
{
j++;
{for(l=i;l<n;l++)
*(p+l)=*(p+l+1);}

i--;
}
}
for(i=0;i<n-j-1;i++)
{printf("%d ",*p);p++;}
p=a;
printf("%d",*(p+n-j-1));
}