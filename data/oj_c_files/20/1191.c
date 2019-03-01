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
	char str[12],substr[5];
	int i,j;
	char X;
	while(scanf("%s %s",str,substr)!=EOF)
	{
		X=str[0];
		for(i=1;i<strlen(str);i++)
			if(X<str[i]) X=str[i];
		for(i=1;i<strlen(str);i++)
			if(str[i]==X) break;
		for(j=0;j<=i;j++)
			printf("%c",str[j]);
		printf("%s",substr);
		for(j=i+1;j<strlen(str);j++)
			printf("%c",str[j]);
		printf("\n");
	}
	return 0;
}
