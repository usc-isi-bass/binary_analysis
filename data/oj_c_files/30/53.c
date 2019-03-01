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
	int i,n;
	long sum=0;
    scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		if ((7*floor(i/7)!=i) && (i%10 != 7) && (i/10 !=7) )
		
			sum=sum + i*i ;
	
		
	}
	printf("%d\n",sum);
}
