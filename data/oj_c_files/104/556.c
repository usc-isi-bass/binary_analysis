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
	int x,y;int n1=0;int n2=0;int a[11];int i;
	scanf("%d %d",&x,&y);
	int m;
	m=x;
	while(m!=0)
	{
		a[n1]=m;
		n1++;
		if(m%2==0) m=m/2;
		else m=(m-1)/2;

	}
	m=y;
	while(m!=0)
	{
		for(i=0;i<=n1-1;i++)
		{
			if(a[i]==m) 
			{printf("%d",m);
			return 0;}
		}
		if(m%2==0) m=m/2;
		else m=(m-1)/2;

	}
	return 0;
}
