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
int k,j,a[1001],b[1001],t[1001],i=0,max=0;char c=',';
while(c==',')  {scanf("%d%c",&a[i],&c);i++;}
i=0; c=',';
while(c==',')  {scanf("%d%c",&b[i],&c);i++;}
for(j=0;j<1000;j++)    
{t[j]=0;
for(k=0;k<i;k++)   if((j>=a[k])&&(j<b[k]))   t[j]++;}
for(j=0;j<1000;j++)    if(t[j]>max)  max=t[j];
printf("%d %d",i,max);
}
