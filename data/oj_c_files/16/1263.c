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
	int x,i,result=1;
	scanf("%d",&x);

	if(!x)
		printf("0");
	while(x)
	{
		printf("%d",x%10);
		x=x/10;
	}
	printf("\n",result);
	return 0;
}