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
	int i=0,j,k,max=0,min=40,a[50],p,q;
	char s[50][40];
	char (*str)[40]=s;
	int *n=a;
	while (!feof(stdin)) scanf("%s", *(str+(i++)));
	j=i-2;
	for(;j>=0;j--)*(n+j)=strlen(s[j]);
	for(j=0;j<=i-2;++j)
	{
		if(max<*(n+j))
		{
			max=*(n+j);
			p=j;
		}
		if(min>*(n+j))
		{
			min=*(n+j);
			q=j;
		}
	}
	printf("%s\n",*(str+p));
	printf("%s",*(str+q));
}