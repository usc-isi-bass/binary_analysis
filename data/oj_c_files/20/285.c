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
	char a[11]={'\0'},b[4]={'\0'};
	char c;
	int i,k,m;
	while(scanf("%s %s",a,b)!=EOF)
	{
		m=strlen(a);
		c=a[0];
		for(i=1;i<m;i++)
			if(a[i]>c)
			{
				c=a[i];
				k=i;
			}
			for(i=0;i<=k;i++)
				printf("%c",a[i]);
			printf("%s",b);
			for(i=k+1;i<m;i++)
				printf("%c",a[i]);
			printf("\n");
	}
}