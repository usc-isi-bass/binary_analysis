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
	int n,a,b,i;
	int sum=0;
	scanf("%d",&n);
	if (n<10)
	{
		for(i=0;i<=n;i++)
		if(i%7!=0)
			sum=sum+i*i;
    printf("%d",sum);
    }
	else
    {
		for(i=0;i<=n;i++)
		if(i%7!=0)
		{
			a=i/10;
		    b=i-a*10;
			if(a!=7 && b!=7)
        
				sum=sum+i*i;
		}
	          printf("%d",sum);
	}
	return 0;
}