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

main()
{
	int i,j=0,n,k=0,b[100];
	char s[100];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			b[j]=i;
			j++;
		}
	}
	b[j]=n;
	b[-1]=0;
	for(k=0;k<j;k++)
	{
		for(i=b[j-1-k]+1;i<b[j-k];i++)
		{
			printf("%c",s[i]);
		}
		printf(" ");
	}
	for(i=0;i<b[0];i++)
		printf("%c",s[i]);
}
