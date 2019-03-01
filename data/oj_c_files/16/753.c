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
	int a[4],i=0;
	char mm;
	while((mm=cin.get())!='\n')
	{
		a[i]=mm-'0';
		i++;
	}
	for(int j=0;j<=i-1;j++)
	{
		printf("%d",a[i-1-j]);
	}

	return 0;
}
