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
	int n,i,j,b;
	int a[20000];
    scanf("%d",&n);
	i=0;
	j=0;
	b=0;
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	i=1;
	printf("%d",a[0]);
	while(i<n)
	{
	    while((j<i)&&(b==0))
		{
			if(a[j]!=a[i]) j++;
			else b=1;
		}
		if(b==0) printf(" %d",a[i]);
		i++;
		j=0;
		b=0;
	}
	return 0;
}

				  
