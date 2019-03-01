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
int a[5];
int i,j,m,n;
scanf("%d",&n);
for(i=5;i>0;)
{
	j=(int)pow(10,i-1);
	if(n/j!=0)break;
	i--;
}
for(j=0;j<i;j++)
{m=(int)pow(10,i-1-j);
 a[j]=(int)(n/m)-10*((int)(n/(10*m)));
}
for(j=0;j<i;j++)
 printf("%d",a[i-1-j]);
}
