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
	void in(char str[] , char substr[]);
	char str[100], substr[100];
	while ((scanf("%s%s",&str,&substr)) != EOF)
		in(str, substr);
}

void in(char str[], char substr[])
{
	int i,k,max,l;
	l=strlen(str);
	max=str[0];
	for(i=1;i<l;i++)
	{
		if(max<str[i])
		{
			max=str[i];
			k=i;
		}
	}
	for(i=0;i<=k;i++)
		printf("%c",str[i]);
	printf("%s",substr);
	for(i=k+1;i<l;i++)
		printf("%c",str[i]);
	printf("\n");
}
