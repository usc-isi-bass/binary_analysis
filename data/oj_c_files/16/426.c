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
	int a,b;
	scanf("%d",&a);
	if(a==0) printf("0");
	else
	{
	while(a!=0)
	{
		b=a-a/10*10;
		a=a/10;
		printf("%d",b);
	}
	}
	return 0;
}