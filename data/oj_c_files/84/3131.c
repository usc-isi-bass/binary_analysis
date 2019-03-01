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
	int n,i,a,b,max,sub,temp;
	scanf("%d %d",&n,&a);
max=a;sub=a;
for(i=1;i<=(n-1);i++)
{	
	scanf("%d",&b);
	if(max<b)
	{temp=max;max=b;sub=temp;}
	if(sub<b&&b<max)
		sub=b;}
	printf("%d\n%d",max,sub);
}
