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
	int a,b,i,n,m;
	scanf("%d",&n);
	for(i=0,m=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		if(a==1)
		{
			if(b==0)
				m--;
			if(b==2)
				m++;
		}
		if(a==2)
		{
			if(b==0)
				m++;
			if(b==1)
				m--;
		}
		if(a==0)
		{
			if(b==1)
				m++;
			if(b==2)
				m--;
		}
	}
	if(m>0)
		printf("A");
	if(m<0)
		printf("B");
	if(m==0)
		printf("Tie");
	return 0;
}