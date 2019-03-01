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
	int a,b,i,j,k,t,s,n,m;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		n=i;s=0;
		for(k=2;k<=(n/2);k++)
		{
			if(n%k==0)
			{s=s+1;
			break;
			}
		}
		if(s==0)
		{
		for(;;)
		{
			t=n%10;
			s=s*10+t;
			n=n/10;
			if(n==0)
				break;
		}
		if(s==i)
		{printf("%d",i);
		break;}
		}
	}
	if(i>b)
		printf("no");

		for(j=i+1;j<=b;j++)
	{
		m=j;s=0;
		for(k=2;k<(m/2);k++)
		{
			if(m%k==0)
			{s=s+1;
			break;
			}
		}
			if(s==0)
			{
		for(;;)
		{
			t=m%10;
			s=s*10+t;
			m=m/10;
			if(m==0)
				break;
		}
		if(s==j)
			printf(",%d",j);
			}
	}
     	return 0;
}