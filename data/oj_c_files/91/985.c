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
	char a[100],c;
	int i=0,j;
	while((c=getchar())!='\n')
	{
		a[i]=c;
		i++;
	}
	for(j=0;j<i-1;j++)
		printf("%c",a[j]+a[j+1]);
	printf("%c",a[i-1]+a[0]);
	return 0;
}