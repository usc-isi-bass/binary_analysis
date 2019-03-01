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
	int n,i,s,a,c=1,k,t;
	scanf("%d",&n);
	for(i=0;i<n*n;i++)
	{
		scanf("%d",&a);
		if(a==0)
		{
			if(c)
			{
				t=i;
				c=0;
			}
			k=i;
		}
	}
	s=(k%n-t%n-1)*(k/n-t/n-1);
	printf("%d",s);
	return 0;
}