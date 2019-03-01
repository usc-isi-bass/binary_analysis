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
	int n,i,j,si=0;
	int s[20000]={0};
	scanf("%d",&n);
	if(n>=5)
	{
		for(i=3;i<n-1;i++)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
					s[j]=1;
				else
					s[j]=0;
			}
			for(j=2;j<i;j++)
				si=si+s[j];
			if(si==0)
			{
				for(j=2;j<i;j++)
				{
					if((i+2)%j==0)
						s[j]=1;
					else
						s[j]=0;
				}
			}
			for(j=2;j<i;j++)
				si=si+s[j];
			if(si==0)
				printf("%d %d\n",i,i+2);
			si=0;
		}
	}
	else
		printf("empty\n");
	return 0;
}