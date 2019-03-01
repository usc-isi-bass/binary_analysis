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
	int a,b,c,n,i,j,k;
	scanf("%d",&n);
	for(i=2;i<=n-2;i++)
	{
		a=i;
		for(j=2;j<=i;j++)
		{
			b=a%j;
			if(b==0) break;
			else continue;
		}
		c=i+2;
		
        for(k=2;k<=c;k++)
		{
			b=c%k;
			if(b==0) break;
			else continue;
		}
		
		if(j==a&&k==c)
		printf("%d %d\n",a,c);
	}
         if (n<5)
        printf("empty\n");

	return 0;
}