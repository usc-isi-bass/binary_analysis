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

main()
{
	int n,i,m,j,k,b=0,l;
	scanf("%d",&n);
	for(i=1;i<=n-2;i++)
	{
		k=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			k++;
		}
		if(k==2)
		{
			m=i;
			l=0;
			for(j=1;j<=m+2;j++)
			{
				if((m+2)%j==0)
				l++;
			}
			if(l==2)
			{
				if(m==3)
				printf("%d %d",m,m+2);
				else
				printf("\n%d %d",m,m+2);
				b=1;
			}
		}
		
	
		
	}
	if(b==0)
	printf("empty");
}