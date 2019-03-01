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
	int n,i,j,b[10000]={0};
		scanf("%d",&n);
	if(n<5)
		printf("empty");
	else
	{
		for(i=5;i<=n;i=i+2)
		{
			for(j=2;j<i/2;j++)
			{if(i%j==0)
			b[i]++;}
			if(b[i]==0&&b[i-2]==0)
				printf("%d %d\n",i-2,i);
		}
	}

	return 0;
}

