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
	char c='\n';char a[100]; int i;
	for(i=0;;i++)
	{
		if(i==0)
		{scanf("%s",a);
		printf("%d",strlen(a));}
		else
	{scanf("%s",a);
		printf(",%d",strlen(a));}
		if(c==getchar()) break;
	}
}