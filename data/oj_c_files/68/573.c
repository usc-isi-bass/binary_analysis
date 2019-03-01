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
	long n,m,t,i,j,k;
	int p,q,a,b;
	scanf("%ld",&n);
	for(m=6;m<=n;m=m+2)
	{
		printf("%ld=",m);
		for(i=3;i<m;i=i+2)
		{
			t=m-i;
			a=(int)sqrt(i);
			b=(int)sqrt(t);
			for(j=1;j<=a;j=j+2)
			{
				if(i%j==0&&j!=1)
				{p=1;break;}
				else p=0;
			}
			for(k=1;k<=b;k=k+2)
			{
				if(t%k==0&&k!=1)
				{q=1;break;}
				else q=0;
			}
			if(p==0&&q==0)
			{printf("%ld+%ld\n",i,t);break;}
		}
	}
}




