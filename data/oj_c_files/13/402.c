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
int i,j,k=0,n,a[100000];
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n");
printf("%d",a[0]);
for(i=1;i<n;i++)
{
for(j=0,k=0;j<i;j++)
{
if(a[j]==a[i]){k=1;}
}
if(k==0){printf(" %d",a[i]);}
}
}
