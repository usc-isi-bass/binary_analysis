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
	int m,a,b,A,B,i;
	scanf("%d",&m);
	a=3;
	
	for(a=3;a<=m/2;a=a+2)
	{
		b=a;
		for(b=a;b<=m;b=b+2)
		{
			if(a+b==m)
			{
				A=1;
				B=1;
				i=2;
				for(i=2;i<a;i++)
				{
					if(a%i==0)
						A=-1;
				}
				i=2;
				for(i=2;i<b;i++)
				{
					if(b%i==0)
						B=-1;
				}
				if(A==1&&B==1)
					printf("%d %d\n",a,b);
			}
		}
	}
	return 0;
}
