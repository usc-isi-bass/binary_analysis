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
	char (*p)[20];
	int i=0,ok=1;
	p=(char(*)[20])calloc(300,20*sizeof(char));
	while(scanf("%s",*(p+i))==1)
	{
		if (ok)
		{printf("%d",strlen(*(p+i)));ok=0;}
		else
			printf(",%d",strlen(*(p+i)));
		i++;
	}

  return 0;
}