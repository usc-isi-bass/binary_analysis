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
	int a,b,x,m,n,i,j,p=0,s,sign;
	double k;
	scanf("%d %d",&m,&n);
	i=m;
	for(i=m;i<=n;i++)
	{
//		printf("i:%d  ",i);
		x=0;
		a=i;
		s=i;
		for(;a!=0;)
		{
			b=a%10;
			x=10*x+b;
			a=a/10;
		}
		if(x==s)
		{
	//		printf(" huiwen");
			sign =0;
			k=sqrt(x);
			for(j=2;j<=k;j++)
			{
				if(x%j==0)
				{
					sign = 1;
					break;
				}
			}
			if(sign == 0)
			{
	//			printf(" prime");
				p++;
				if (p==1)
					printf("%d",x);
				else if (p>1)
					printf(",%d",x);
				
			}
		}
	}
	if(p==0)
		printf("no");
}