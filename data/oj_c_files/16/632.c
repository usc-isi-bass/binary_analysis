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
	int a;
	scanf("%d",&a);
	if(a/10==0)
		printf("%d",a);
	else if(a/100==0)
		printf("%d%d",a%10,a/10);
	else if(a/1000==0)
		printf("%d%d%d",a%10,a%100/10,a/100);
	else
		printf("%d%d%d%d",a%10,a%100/10,a%1000/100,a/1000);
	return 0;
}