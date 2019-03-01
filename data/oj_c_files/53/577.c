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
int a[300],n,i,j,t=0,v=0;
scanf("%d",&n);
for(i=0;;i++)
{
t++;if(t==n+1)break;
scanf("%d",&a[i]);
for(j=0;j<i;j++)if(a[j]==a[i])break;
j==i?v++:i--;
}
for(i=0;i<v;i++)
{
printf("%d",a[i]);
if(i!=v-1)printf(",");
}}
