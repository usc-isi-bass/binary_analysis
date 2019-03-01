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

int count(int month)
{
	int c[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,answer=0;
	for(i=0;i<month;i++)
	answer+=c[i];
	answer+=13;
	return(answer);
}
void main()
{
	int t,w,a[13],i,b[13];
	scanf("%d",&w);
    for(i=1;i<=12;i++)
	{
		a[i]=count(i);
		a[i]-=1;
	}
    t=7-w;
	for(i=1;i<=12;i++)
	{
		b[i]=(a[i]-t)%7;
	}
	for(i=1;i<=12;i++)
	{
		if(b[i]==5)
			printf("%d\n",i);
	}
}
