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
	char *p[100];
	int i,j,n,m;
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
		*(p+i)=(char *)malloc(80*sizeof(char));
	for (i=0;i<n;i++)
		gets(*(p+i));
	for (i=0;i<n;i++)
	{
		m=1;
		if (!((*(*(p+i))>=65&&*(*(p+i))<=90)||(*(*(p+i))>=97&&*(*(p+i))<=122)||(*(*(p+i))=='_')))
			m=0;
		else
		{
			for (j=0;j<strlen(*(p+i));j++)
			{
				if (!((*(*(p+i)+j)>=65&&*(*(p+i)+j)<=90)||(*(*(p+i)+j)>=97&&*(*(p+i)+j)<=122)||(*(*(p+i)+j)=='_')||(*(*(p+i)+j)>=48&&*(*(p+i)+j)<=57)))
				{
					m=0;
					break;
				}
			}
		}
		printf("%d\n",m);
	}
	return 0;
}