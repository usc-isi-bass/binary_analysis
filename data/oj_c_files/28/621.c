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
	char str[300][40],c;
	int i;
	for(i=0;;i++)
	{
		scanf("%s",&str[i]);
	    c=getchar();
		if(c!=' ') break;
		printf("%d,",strlen(str[i]));
	}
	printf("%d",strlen(str[i]));
}