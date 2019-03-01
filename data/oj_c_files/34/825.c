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

main()
{
int a,b,k,n;
scanf("%d",&n);
for(;n>1;)
{
	if (n%2==1) 
	{
		k=n*3+1;
		printf("%d*3+1=%d\n",n,k);
	}
	else 
	{
	    k=n/2;
		printf("%d/2=%d\n",n,k);
	}
	n=k;
}
printf("End");
return 0;
}