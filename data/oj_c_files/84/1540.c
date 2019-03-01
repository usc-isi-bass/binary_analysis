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
	int n=100;
	int a,b,i;
	scanf("%d%d",&a,&b);
	if(b>a){
		int p;
		p=b;
		b=a;
		a=p;
	}
	for(i=3;i<n;i++)
	{
		int c,m,k;
		scanf("%d",&c);
		if(c>b&&c<a)
		{
			m=a;
			k=c;
			a=m;
			b=k;
		}
		else if(c>a)
		{
			m=c;
			k=a;
			a=m;
			b=k;
		}
	}
	printf("%d\n%d\n",a,b);
	return 0;
}

