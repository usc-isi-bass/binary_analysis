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
	int i;
	char str[40];
	gets(str);
	for(i=0;str[i];i++)
	{
		if(str[i]>47&&str[i]<58)
		{	printf("%c",str[i]);
			if(str[i+1]&&!(str[i+1]>47&&str[i+1]<58))printf("\n");
		}
	}
}