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
	int a,max=0,maxi=0,p=0,q=0;
	char b;
	scanf("%d",&a);
	b=getchar();
	while(b==',')
	{
		p++;
		if(a>max)
		{
			maxi=max;
			max=a;
		}
		else if(a==max)
			q++;
		else if(a>maxi)
			maxi=a;
		scanf("%d",&a);
		b=getchar();
	}
	p++;
	if(a>max)
	{
		maxi=max;
		max=a;
	}
	else if(a==max)
		q++;
	else if(a>maxi)
		maxi=a;

	if(p==1)
		printf("No");
	else if(p==(q+1))
		printf("No");
	else
	    printf("%d",maxi);
	return 0;
}

