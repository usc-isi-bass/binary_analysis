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
	int m,n,k=0,i,j,a,b,c,d;
	int p[1000];
	scanf("%d %d",&m,&n);
	for(a=m;a<=n;a++)
	{
		i=2;
		do
		{
			b=a%i;
			i++;
		}
		while(b!=0&&i<a);
		if(i==a)
		{
			b=0;
			d=a;
			do
			{
				c=d%10;
				b=b*10+c;
				d=d/10;
			}
			while(d!=0);
			if(a==b)
			{
				k=k+1;
				p[k]=a;
			}
		}
	}
	if(k==0)
		printf("no");
	else
	{
	for(i=1;i<=k-1;i++)
		printf("%d,",p[i]);
	printf("%d",p[k]);
	}
}

				

		

