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

void main()
{
	int a,b,c,d,e,f,sum;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f),a!=0)
	{
		sum=(d+12-a)*3600+(e-b)*60+(f-c);
		printf("%d\n",sum);
	}
}

