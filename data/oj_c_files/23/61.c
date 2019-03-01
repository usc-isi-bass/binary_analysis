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
	int i=0;
	char a[10][10];
	scanf("%s",a[i]);
		for(i=1;getchar()!='\n';i++)
			scanf("%s",a[i]);
		for(i=i-1;i>=0;i--)
		{
			if(i==0)
			printf("%s",a[i]);
			else
			printf("%s ",a[i]);
		}
}