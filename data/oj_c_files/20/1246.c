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
	char str[11],substr[4];
	int len,max,i;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		len=strlen(str);
		max=0;
		for(i=0;i<len;i++)
		{
			if(str[i]>str[max])
			max=i;
		}
		for(i=0;i<=max;i++)
		printf("%c",str[i]);
		for(i=0;i<3;i++)
		printf("%c",substr[i]);
		if(max!=len-1)
		for(i=max+1;i<len;i++)
		printf("%c",str[i]);
		printf("\n");
	}
	return 0;
}