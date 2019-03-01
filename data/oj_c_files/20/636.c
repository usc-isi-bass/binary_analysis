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
	int k=0,i,len;
	char str[11],substr[4];
	while (scanf("%s%s",str,substr)!=EOF)
	{
		k=0;
	len=strlen(str);
	for(i=1;i<len;i++)
		if(str[i]>str[k])
			k=i;
	for(i=0;i<=k;i++)
			printf("%c",str[i]);
	printf("%s",substr);
	for(i=k+1;i<len;i++)
			printf("%c",str[i]);
         printf("\n");
	}
}
