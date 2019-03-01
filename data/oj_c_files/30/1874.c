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

int main(int argc, char* argv[])
{
	int n,sum,i,s,g;
	scanf("%d",&n);
	sum=0;
	for (i=1;i<=n;i++)
	{
		if (i%7!=0)
		{
			g=i%10;
			s=i/10;
			if (g!=7 && s!=7)
			{
				sum = sum + i*i;
			}
		}		
	}
	printf("%d",sum);
	return 0;
}
