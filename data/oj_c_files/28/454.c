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
	char a[100];
	int n=0,t=0;
	scanf("%s",a);
	printf("%d",strlen(a));
	while(scanf("%s",a)!=EOF)
	{
		printf(",%d",strlen(a));
	}
	return 0;
}