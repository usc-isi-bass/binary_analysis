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
	char n[5];
	while((n[i]=getchar())!='\n')
		i=i+1;
	i=i-1;
	while(i>=0)
	{
		printf("%c",n[i]);
		i=i-1;
}
printf("\n");
}