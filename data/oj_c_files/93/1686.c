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
	int m;
	scanf("%d",&m);
	if(m%3*m%5*m%7==0)
	{
		if(m%3==0&&m%5*m%7==0)
		printf("3 ");
		if(m%3==0&&m%5*m%7!=0)
			printf("3");
	if(m%5==0&&m%7==0)
         printf("5 ");
	if(m%5==0&&m%7!=0)
		printf("5");
	if(m%7==0)
		printf("7\n");
	}
	else printf("n\n");
}