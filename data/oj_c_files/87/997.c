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

int a,b,c,d,e,f,i;
int sum;
int main()
{
	while(scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f))
	{		if(a==0)
			break;
	else
	{
		sum=0;
	sum+=d*3600;
	sum+=e*60;
	sum+=f;
	sum+=(12-a-1)*3600;
	sum+=(60-b-1)*60;
	sum+=60-c;
    printf("%d\n",sum);
	}
	}
	return 0;
}