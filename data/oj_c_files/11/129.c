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
	int m,a,b;
	int i,s;
	int c=0;
	scanf("%d %d %d",&m,&a,&b);
	if((m%4==0&&m%100!=0)||(m%400==0))
	{
		int months[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<a;i++)
			c=c+months[i];
		s=c+b;
	}
	else
	{ 
		int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<a;i++)
			c=c+month[i];
		s=c+b;
	}
	printf("%d",s);
	return 0;
}