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
	int m,n,e=0,p=0,q=0,a,s,b,k,i,t=0;
	scanf("%d %d",&m,&n);
	
	for(a=m;a<=n;a++)
	{
		s=0;b=0;k=0;
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
				s=s+1;
		}
		if(s==0)
		{
			p++;
			t=a;
			while(t!=0)
			{
				k=t%10;
				b=b*10+k;
				t=t/10;
			}
			if(b==a)
			{
				if(e==0)
				{
				    printf("%d",a);
					e=1;
				}
				else
					printf(",%d",a);
			}
			else q++;
		}
	}
		if(p==q)
			printf("no");
}
