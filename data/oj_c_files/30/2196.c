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
	int n, i, k;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0) continue;
		else
		{
			for(k=i;k>0;k/=10)
			{
				if(k%10==7) break;
			}  
	        if(k==0) sum+=i*i;
		}	
	}
	printf("%d",sum);
	return 0;
}
