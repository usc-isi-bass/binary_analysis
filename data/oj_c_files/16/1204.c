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
	int n;
	scanf("%d",&n);
	if((n>=0)&&(n<=9))
		printf("%d",n);//?????????
	else
	{
	do
	{
		printf("%d",n%10);
		n=n/10;
	}while(n/10!=0);
	printf("%d",n);
	}
	return 0;
}


	