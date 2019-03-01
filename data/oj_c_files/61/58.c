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

main()
{
int a,b,c,i,j;
int d[1000];
int e[1000];
scanf("%d",&a);
for(i=0;i<a;i++)
scanf("%d",&d[i]);
for(i=0;i<a;i++)
{e[0]=1;
e[1]=1;
if(d[i]<=2)
printf("1");
else
{for(j=2;j<d[i];j++)
e[j]=e[j-1]+e[j-2];
printf("%d\n",e[j-1]);
}
}
}