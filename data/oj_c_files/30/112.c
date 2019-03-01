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
	int n,i;
	int sum=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
			sum=sum+i*i-i*i;
		else if(i%2==1 && i%5==2)
			sum=sum+i*i-i*i;
		else if(i>=70 && i<=76)
			sum=sum+i*i-i*i;
		else if(i==78 || i==79)
			sum=sum+i*i-i*i;
		else
		sum=sum+i*i;
	}
	printf("%d", sum);

	return 0;
}