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
	char s[200],w[100];
	
	int i;
	scanf("%s %s",s,w);
	
	
	for (i=0;i<100;i++)
		if (w+i==strstr(w,s))
		{
			printf("%d",i);
			break;
		}
}
