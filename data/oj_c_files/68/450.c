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

int main()

{long int a[60000],i,j,o,n;
scanf("%d",&n);
a[1]=0;
a[2]=1;
a[3]=1;
a[4]=0;
a[5]=1;
a[6]=0;
for(i=7;i<=n;i=i+2)
{o=0;
for(j=3;j<i;j=j+2)
{
if (i%j==0){a[i]=0;o=1;break;}}
if(o==0)a[i]=1;
}
for(i=6;i<=n;i=i+2)
{
for(j=3;j<=i/2;j=j+2)
{
if(a[j]==1&&a[i-j]==1){printf("%d=%d+%d\n",i,j,i-j);
break;}}
}}
