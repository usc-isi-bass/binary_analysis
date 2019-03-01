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
	while(scanf("%s%s",str,substr)!=EOF)
	{
		int i,pos=0;
		for(i=1;str[i];i++)
			if(str[i]>str[pos])
				pos=i;
		for(i=0;i<=pos;i++)
			printf("%c",str[i]);
		printf("%s",substr);
		while(str[i])
			printf("%c",str[i++]);
		printf("\n");
	}
	return 0;
}