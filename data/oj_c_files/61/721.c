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
	int a[10],n,c=0,b=1,f=1;
	int i,d,e,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]==1||a[i]==2)
		printf("1");
	else
	{
	for(p=2;p<a[i];p++)
	{
		c=f+b;
		e=c;
		d=b;
		b=e;
		f=d;
	}
	printf("\n%d\n",c);
	c=0;
	b=1;
	f=1;
	} 
	}
	return 0;
}