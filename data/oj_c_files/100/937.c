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
	char a[300],b[123];
	gets(a);
	int num[123],i,j,total=0;
	for(i=97;i<123;i++)
	{
		b[i]=i;
		num[i]=0;
		for(j=0;a[j]!='\0';j++)
		{
			if(a[j]==i)
			{
				num[i]++;
				total++;
			}

		}
	}


	if(total==0)
		printf("No");
	else
	{
		for(i=97;i<123;i++)
		{
			if(num[i]!=0)
				printf("%c=%d\n",b[i],num[i]);
		}
	}
	return 0;
	
}