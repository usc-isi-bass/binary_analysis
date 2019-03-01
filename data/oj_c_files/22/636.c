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
char c=',';int i=0,a[301],j,max=0;
while(c==',')   {scanf("%d%c",&a[i],&c);i++;}
for(j=0;j<i;j++)    {if(a[j]>max)  max=a[j];}
for(j=0;j<i;j++)    {if(a[j]==max)  a[j]=0;}
max=0;
for(j=0;j<i;j++)    {if(a[j]>max)  max=a[j];}
if(max==0)   printf("No");
else   printf("%d",max);
}
