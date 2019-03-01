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
	int k;
	scanf("%d",&k);
	while(k!=1)
	{
		printf("%d",k);
		if(k%2==1)
		{
			k=k*3+1;
			printf("*3+1=%d\n",k);
		}
		else
		{
			k=k/2;
			printf("/2=%d\n",k);
		}
	}
	printf("End");
}