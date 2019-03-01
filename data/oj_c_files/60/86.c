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

void main()
{
	int n,i,j,m,all;
	scanf("%d",&n);
	if(n<=4)
		printf("empty");
	else
	{	
		for(i=3;i<=n-2;i+=2)
		{
			m=0;
			all=0;
			for(j=3;j<i/2;j++)
			{
				if(i%j!=0)
					m++;
				all++;
			}
			if(m==all)
			{
				m=0;
				all=0;
				for(j=3;j<(i+2)/2;j++)
				{
					if((i+2)%j!=0)
						m++;
					all++;
				}
				if(m==all)
				{
					printf("%d %d\n",i,i+2);
				}
			}
		}
			
	}
}