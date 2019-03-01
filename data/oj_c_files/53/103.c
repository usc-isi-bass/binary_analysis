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
	int n,a[300],i,b[300],j=0,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%d",a+i);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			*(b+j)=*(a+i);
			j++;
		}
		if(i>0)
		{
			for(p=0;p<=j;p++)
			{
				if(*(a+i)==*(b+p))
					break;
				if(p==j)
				{
					*(b+j)=*(a+i);
					j++;
				    break;
				}
			}
		}
	}
	for(i=0;i<j-1;i++)
		printf("%d,",*(b+i));
	printf("%d",*(b+j-1));
	return 0;
}