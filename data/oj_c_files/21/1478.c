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
int i,n,r;
float a,c;
c=0;
a=0;
r=0;
int k[201],m[201];
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&k[i]);
for(i=1;i<=n;i++)
c=(c+k[i]);
c=c/n;
for(i=1;i<=n;i++)
{if ((k[i]>c?(k[i]-c):(c-k[i]))>a) {a=(k[i]>c?(k[i]-c):(c-k[i]));r=1;m[1]=k[i];}
else if((k[i]>c?(k[i]-c):(c-k[i]))==a) {r=r+1;m[r]=k[i];}}
for(i=1;i<=r;i++)
{printf("%d",m[i]);
if(i!=r) printf(",");}
printf("\n");
}
