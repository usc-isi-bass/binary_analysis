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
	int i, j, m, a, b;
	scanf("%d", &m);
	for(i=3; i<=m/2; i++)
	{
		a=0;
		b=0;
		for(j=2; j<=i-1; j++)
		{
			if(i%j==0)
			{
				a=1;
			    break;
			}
		}
		if(a==0)
		{
			for(j=2; j<=m-i-1; j++)
			{
		        if((m-i)%j==0)
				{
					b=1; 
				    break;
				}
			}
			if(b==0)
                printf("%d %d\n", i, m-i);
		}
	}
	return 0;
}