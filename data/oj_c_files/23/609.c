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
	char a[50][1000],p;
	int i=0,count;
	do
	{
		i++;
		scanf("%s%c",a[i],&p);
	}while(p!='\n');
	count=i;
	for(i=count;i>=2;i--)
	{
		printf("%s ",a[i]);
	}
	printf("%s",a[1]);
}