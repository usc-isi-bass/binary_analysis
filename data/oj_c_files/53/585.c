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
	int i,n,m;int w;char a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	char * p1;char * p2;
	m=strlen(a);
	for(p1=a;p1<(a+m);p1++)
	{
		w=1;
		for(p2=a;p2<p1;p2++)
		{
			if(*p2==*p1)
			{
				w=0;break;
			}
		}
		if(w==1&&p1==a)printf("%d",*p1);
		else if(w==1&&p1!=a)
    	printf(",%d",*p1);
	}
}
