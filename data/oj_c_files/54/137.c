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
float m,h;
int l,j,n,k;
scanf("%d %d",&n,&k);
if(n==1)
printf("%d\n",(int)(n+k));
else
{
for(l=1;;l++)
{
m=(float)(l)*(float)(n)+k;
for(j=1;j<n;j++)
{
if((int)(m)!=m)
break;
h=m/(float)(n-1);
m=h*(float)(n)+k;
if((int)(h)!=h)
break;
}
if((int)(m)!=m)
continue;
if((int)(h)!=h)
continue;
if((int)(m)==m)
{
printf("%d\n",(int)(m));
break;
}
}}}
