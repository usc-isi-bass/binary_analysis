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
	int num[100000],n,del,rem;
	scanf("%d",&n);
	int i;
	for(i=0;i<=n-1;i++)
	scanf("%d",&num[i]);
	scanf("%d",&del);
	rem=n;
	int g;
	for(g=n-1;num[g]==del;g--)
	{
		rem-=1;
	}
	int e;
	for(e=0;e<=rem-1;e++)
	{
		while(num[e]==del)
		{
			int t;
			for(t=e;t<=rem-2;t++)
			{
				num[t]=num[t+1];
			}
			rem-=1; 
		}
	}
	int m;
	for(m=0;m<=rem-1;m++)
	{
		printf("%d",num[m]);
		if(m<=rem-2)
			printf(" ");
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
	return 0;
}

