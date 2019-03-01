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


int su(int k);

int main()
{
	int n;
	scanf("%d",&n);
	int f = 6;
	int k;
	while(f<=n)
	{
		int i = 2;
		while(i<=(f/2))
		{
			if ( su(i) == 1 )
			{
				k = f - i;
				if ( su (k) == 1)
				{
					printf("%d=%d+%d\n",f,i,k);
					break;
				}
			}
			i++;
		}
		f += 2;
	}
	return 0;
}

int su(int k)
{
	int i;
	for(i = 2; i <= sqrt(k);i++)
	{
		if( k%i == 0 )
		{
			return 0;
		}
	}
	return 1;
}
