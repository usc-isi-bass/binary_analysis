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
	char str[20],substr[5];
	int i,p;
	while(scanf("%s %s",str,substr)!=EOF)
	{
		for(i=0,p=0;i<strlen(str);i++)
			if(str[i]>str[p]) p=i;
			for(i=0;i<=p;i++)
				printf("%c",str[i]);
			printf("%s",substr);
			for(i=p+1;i<strlen(str);i++)
				printf("%c",str[i]);
			printf("\n");
	}
}

