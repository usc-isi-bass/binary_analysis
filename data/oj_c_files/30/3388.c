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
	int n;
	int sum=0;
	scanf("%d", &n);
	if(n==0)
	{
		printf(0);
	}
	else
	{
		int i=0;
	    for(i=0; i<=n; i++)
		{
			if(i%7 != 0 && i%10 !=7 && i/10 !=7)
			{
				sum = sum + i*i;
			}
	      	 
		}
	}printf("%d\n", sum);
		
}
