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
	int n,max=0,i,sec=0,a[301];
	char c;
	for(i=0;;i++)
	{
		scanf("%d%c",&a[i],&c);
		if(c!=',')
			break;
	}
	n=i;
	for(i=1;i<=n;i++)
	{
		if(a[i]>a[max])
		{
			sec=a[max];
			max=i;
		}
		else if(a[i]>sec&&a[i]<a[max])
		{
			sec=a[i];
		}
	}
	if(a[max]==sec||sec==0)
	{
		printf("No");
	}
	else
	printf("%d",sec);
	return 0;
} 