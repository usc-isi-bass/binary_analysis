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


int monkeyApple( int n, int k)
{
	int i, left, flag,sum;
	for(left = 1; ;left++)
	{
		flag = 1;
		sum = left;
		for( i = 1; i < n; i ++)
		{
			if( (n * sum + k) % (n-1) != 0 )
			{
				flag = 0;
				break;
			}
            sum = (n * sum + k) / (n-1);
		}

		if(i == n && flag == 1)
		{
			sum = n*sum + k;
			break;
		}
	}

	return sum;

}



int main()
{
	int n, k;
	scanf("%d%d", &n, &k);


	printf("%d\n", monkeyApple(n,k));

	return 0;

}