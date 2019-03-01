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
	int n,m,i,j,k=0,flag,a,b,s;
	scanf("%d%d",&n,&m);
	i=n;
	while(i<=m)
	{
		a=i;s=0;
		while(a>0)
		{  
			b=a%10;
		    s=s*10+b;
            a=a/10;
		}
		if(s==i)
		{ 
			j=2;flag=0;
			while(j<=i/2)
			{
				if(i%j==0)
					flag=1;
				j++;
			}
			if(flag==0)
			{
				k++;
				if(k==1)
					printf("%d",i);
				if(k>1)
					printf(",%d",i);
			}
		}
		i++;
	}

	if(k==0)
		printf("no");
}




