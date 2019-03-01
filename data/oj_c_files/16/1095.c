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
	int a,a1,a2,a3,a4,b;
	scanf("%d",&a);
	a1=a/1000;
	b=a-a1*1000;
	a2=b/100;
	b=b-a2*100;
	a3=b/10;
	a4=b-a3*10;
	b=a1+a2*10+a3*100+a4*1000;
	if(a>999)
	{
	if(b>999)
		printf("%d\n",b);
	else if(b>99)
		printf("0%d\n",b);
	else if(b>9)
		printf("00%d\n",b);
	else printf("000%d\n",b);
	}
	else if(a>99)
	{
	b=b/10;
	if(b>99)
		printf("%d\n",b);
	else if(b>9)
		printf("0%d\n",b);
	else printf("00%d\n",b);
	}
	else if(a>9)
	{
	b=b/100;
    if(b>9)
		printf("%d\n",b);
	else printf("0%d\n",b);
	}
	else 
	{
		b=b/1000;
		printf("%d\n",b);
	}
	return 0;
}

	