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
	int n=1,i;
	char a[100][100];
	scanf("%s",&a[0]);
	for(i=1;getchar()!='\n';i++)
	{
	scanf("%s",&a[i]);
	n++;
	}
		for(i=n-1;i>0;i--)
		printf("%s ",a[i]);
		printf("%s",a[0]);
}
