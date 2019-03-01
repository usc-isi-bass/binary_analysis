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
	char a[11],b[4],max,ans[14];
	int i,k,n,f,j;
	char *pa,*pb;
	j=0;
	while (scanf("%s %s",a,b)!=EOF)
	{
		pa=a;
		pb=b;
		k=strlen(a);
		f=strlen(b);
		max=0;
		for(i=0;i<k;i++)
		{
			if(*pa>max)
			{
				max=*pa;
				n=i;
				pa++;
			}
			else pa++;
		}
		i=0;
		for(pa=a;pa<a+n+1;pa++)
		{
			printf("%c",*pa);
		}
		for(pb=b;pb<b+f;pb++)
		{
			printf("%c",*pb);
		}
		for(pa=a+n+1;pa<a+k;pa++)
		{
			printf("%c",*pa);
		}
		printf("\n");
	}
}