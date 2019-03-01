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
	int b,c,n,i;
	char d[200],e[232],f[232];
	int max=0,min=100;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",d);
		b=strlen(d);
		if(b>max)
		{
			max=b;
			strcpy(e,d);
		}
		if(b<min)
		{
			min=b;
			strcpy(f,d);
		}
	}
	printf("%s\n",e);
	printf("%s\n",f);
	return 0;
}