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
	int i;
	int *p,*q;
	int x,y;
    int a[10],b[10];

	scanf("%d%d",&x,&y);
	for(i=0;x;i++)
	{
		a[i]=x;
		x/=2;
		p=&a[i];
	}
	for(i=0;y;i++)
	{
		b[i]=y;
		y/=2;
		q=&b[i];
	}
	for(;;q--,p--)
		if(*q==*p&&*(q-1)!=*(p-1))
		{
			printf("%d\n",*p);
			break;
		}
	return 0;
}