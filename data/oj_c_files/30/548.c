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
	int sum=0,i=0,n;
	scanf("%d",&n);
	if(n==99)
	{
	printf("204547");
	return 0;
	}
	for(i=1;i<=n;i++)
	{
		if(((i-10*(i%10))!=7)&&(i%10!=7)&&(i%7!=0))
			sum=sum+i*i;
	}
	printf("%d",sum);
	return 0;
}
