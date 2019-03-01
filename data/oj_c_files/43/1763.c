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
    int m,i,j,n;
	scanf("%d",&m);
	for(i=3;i<=m/2;i+=2)
	{
		for(j=3;j*j<=i;j+=2)
			if(i%j==0)
				break;
		if(j*j<=i) 
			continue;
		n=m-i;
		for(j=3;j*j<=n;j+=2)
			if(n%j==0)
				break;
		if(j*j>n)
			printf("%d %d\n",i,m-i);

	}
					
    return 0;
}

