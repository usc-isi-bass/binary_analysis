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
{
	int a[20000],k,j,b,c,d,e,f,i;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{scanf("%d",&a[i]);}
	printf("%d",a[0]);
	for(j=1;j<b;j++)
	{for(k=0;k<j;k++)
	{if(a[k]==a[j])break;}
	if(k==j)printf(" %d",a[j]);}
	return 0;
}