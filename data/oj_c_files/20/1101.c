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

int max(char a[])
{
	int i,t=a[0];
	for(i=0;i<=strlen(a);i++)
	{
		if(t<a[i])
			t=a[i];
	}
	i=0;
	while(a[i]!=t)
		i++;
	return i;
}
void main()
{
char str[11],substr[4];
while(scanf("%s%s",str,substr)!=EOF)
{
	int i;
	int t=max(str);
	for(i=0;i<=t;i++)
		printf("%c",str[i]);
	printf("%s",substr);
	for(i=t+1;i<strlen(str);i++)
		printf("%c",str[i]);
	printf("\n");
}
}

