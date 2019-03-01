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

int main ()
{
int n=1,a[300],i=1,j,k=1,t;
scanf("%d",&a[0]);
while(scanf(",%d",&a[i]))
{n++;
i++;}
if(n==1) {printf("No");}
else
{for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(a[i]<a[j]) {t=a[i];a[i]=a[j];a[j]=t;}
for(k=1;k<=n-1;)
{if(a[k]!=a[0]){printf("%d",a[k]);break;}
else k++;}
if(a[n-1]==a[0]) {printf("No");}}}