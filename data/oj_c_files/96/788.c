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
	char c[100];
	int f,num,s=0;
	int i;

	gets(c);

	f=c[0]-48;
	for(i=1;c[i]!=0;i++)
	{
		num=f*10+c[i]-48;
		if(num/13==0&&s==0)
		{
			f=num%13;
		}
		else
		{
			printf("%d",num/13);
			f=num%13;
			s=1;
		}
	}
	if(s==0)
		printf("0");
	printf("\n%d\n",f);
	return 0;
}
