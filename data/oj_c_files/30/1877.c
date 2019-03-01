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
	int n, i, k, l, sum=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
           l = i%10;
	  k = (i - l) / 10;
		if(i%7==0||i%10==7||k%10==7)
		{
			continue;
		}
		sum+=i*i;
	}
    printf("%d", sum);
    return 0;
}