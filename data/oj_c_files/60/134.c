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
	int n;
	scanf("%d",&n);
	int i,j,r,s;
	s=0;
	for(r=2;r<=(n-2);r++)
	{
		j=0;
		for(i=2;i<=r;i++)
		{
			if(r%i==0)
				j++;
		}
		if(j==1)
		{
			j=0;
			for(i=2;i<=(r+2);i++)
			{
				if((r+2)%i==0)
					j++;
			}
			if(j==1)
			{
				printf("%d %d\n",r,r+2);
				s++;
			}
		}
	}
	if(s==0)
		printf("empty\n");

}