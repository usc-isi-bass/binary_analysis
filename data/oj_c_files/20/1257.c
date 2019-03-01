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
	char str[14],substr[4];
	int max=0,i,l;
	while (scanf("%s%s",str,substr)!=EOF)
	{
		l=strlen(str);
		for (i=0;i<l;i++)
			if (str[i]>str[max]) max=i;
		for (i=l-1;i>=max+1;i--)
			str[i+3]=str[i];
		for (i=1;i<=3;i++)
			str[max+i]=substr[i-1];
		str[l+3]=0;
		puts(str);
	}
}
