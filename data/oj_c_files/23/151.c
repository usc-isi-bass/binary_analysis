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

main()
{
	int i=0;
	char a[50][40],b[50];
	while(scanf("%s",b)!=EOF)
	{
		strcpy(a[i],b);
		i++;
	}
	int j;
	printf("%s",a[i-1]);
	for(j=i-2;j>=0;j--)
		printf(" %s",a[j]);
}