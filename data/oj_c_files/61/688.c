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
	int n,a[100],t[100],i,j,c=1,b=1,e,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{
		if(a[i]==2||a[i]==1)
		{
			printf("1\n");
			
		}
		else
		{
			c=1;b=1;
		    for(j=2;j<a[i];j++)
		    {
			    t[j]=c+b;
				l=j;
			    e=b;
			    b=c+b;
			    c=e;
		    }
		    printf("%d\n",t[l]);
		}
	}
	return 0;
}
