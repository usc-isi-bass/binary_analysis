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
	int M,m,n,i,a1,a2,a;
	scanf("%d",&n);
	scanf("%d%d",&a1,&a2);
    if(a1>a2)
	{
		M=a1;
		m=a2;
	}
	else
	{
		M=a2;
		m=a1;
	}
	for(i=3;i<=n;i++)
	{
		scanf("%d",&a);
	    if(m>a)
		{
			M=M;
			m=m;
		}
		else
		{
			if(a>M)
			{
				m=M;
				M=a;
			}
			else
			{
				M=M;
				m=a;
			}
		}
	}
	printf("%d\n%d",M,m);
	return 0;
}