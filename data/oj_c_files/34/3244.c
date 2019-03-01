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
	int num1,num2;
	scanf("%d",&num1);
	if (num1==1)
		printf("End");
	else
	{
		if (num1%2==0)
			num2=num1/2;
		else
			num2=num1*3+1;
		while (num2!=1)
		{
			if (num1%2==0)
				printf("%d/2=%d\n",num1,num2);
			else
				printf("%d*3+1=%d\n",num1,num2);
			num1=num2;
			if (num1%2==0)
				num2=num1/2;
			else
				num2=num1*3+1;
		}
		if (num1%2==0)
			printf("%d/2=%d\n",num1,num2);
		else
			printf("%d*3+1=%d\n",num1,num2);
		printf("End");
	}
	return 0;
}