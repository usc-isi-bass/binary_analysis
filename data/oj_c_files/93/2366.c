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
	int n;
	scanf("%d",&n);
	if(n%3==0)
	{
    printf("%d",3);
	if(n%5==0)
    printf(" %d",5);
	if(n%7==0)
    printf(" %d",7);
	}
	else
		if(n%5==0)
		{
    printf("%d",5);
	if(n%7==0)
    printf(" %d",7);
		}
	else
		if(n%7==0)
    printf("%d",7);
		else
			printf("n");
}