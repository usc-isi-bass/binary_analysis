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
	int a[13]={0,13,44,72,103,133,164,194,225,256,286,317,347};
	int b[13], w,i ;
	scanf("%d", &w);
	for (i=1; i<=12; i++)
	{
		b[i]=a[i]%7;
	}

	if( w!=7 )
	{
		for(i = 1;i <=12; i++)
		{
			if( b[i] == 6 - w)
				printf("%d\n",i);
		}
	}

	if( w==7 )
	{
		for(i=1; i<=12; i++)
		{
			if(b[i] == 6)
				printf("%d\n",i);
		}

	}
	return 0;	
}