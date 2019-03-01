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

int su(int);
int main()
{
int m,i;
scanf("%d",&m);
for(i=3;i<=m/2;i+=2)
{
if(su(i)&&su(m-i))
	printf("%d %d\n",i,m-i);
}
return 0;
}
int su(int a)
{
int j;
for (j=2;j<=a/2;j++)
{
	if(a%j==0)
   { return 0;
	break;}
	if(j==a/2)
		return 1;
}
}
