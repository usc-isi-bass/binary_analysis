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
	int a=3,b,m=6,i,j,n;
	
		scanf("%d",&n);
	while(m<=n)
	{
		while(a<=m/2)
		{
        
		for(i=2;i<=sqrt(a);i++)
			if(a%i==0) break;
		if(i>sqrt(a))
		{
			b=m-a;
           
			for(j=2;j<=sqrt(b);j++)
				if(b%j==0) break;
			if(j>sqrt(b))
			{
				printf("%d=%d+%d\n",m,a,b);
				a=3;
				break;
			}
			else
				a+=2;
		}
		else
			a+=2;
		}
		m+=2;
	}
	} 