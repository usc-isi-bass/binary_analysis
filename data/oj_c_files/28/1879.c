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
	char a[5000];
	int i,num[300]={0},b=0;
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=' ')
		{
			num[b]++;
		}
		else
		{
			b++;
		}


	}
	for(i=0;i<=b;i++)
	{
		if(num[i]!=0)
		{
			printf("%d",num[i]);
			if(i!=b)
			printf(",");
		}
	}

return 0;
}
