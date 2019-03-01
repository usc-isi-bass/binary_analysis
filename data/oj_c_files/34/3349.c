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
	void jiaogu(int);;
	int input;
	scanf("%d",&input);
	jiaogu(input);
	return 0;
}
void jiaogu(int num)
{
	if(num==1)
	{
		printf("End");
	}
	else
	{
		if(num%2==0)
		{
			printf("%d/2=%d\n",num,num/2);
			jiaogu(num/2);
		}
		else
		{
			printf("%d*3+1=%d\n",num,num*3+1);
			jiaogu(num*3+1);
		}
	}
}
			
