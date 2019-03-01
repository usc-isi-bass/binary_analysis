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

int i(int a,int b,int c)
{
	return(a*3600+b*60+c);
}
main()
{
	int a,b,c,d,e,f;
	int sum;
	for(;;)
	{
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0) break;
		else
		{
			sum=i(d,e,f)+3600*12-i(a,b,c);
			printf("%d\n",sum);
		}
	}
	return 0;
}