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
	int i,count=0;
	char a[20000];
	while( ( a[count] = getchar() ) != '\n' )
	{
		count++;
	}
	for( i = count-1; i >= 0; i-- )
		printf("%c",a[i]);
	printf("\n");
}
