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
	int i,m,n,x=0;
	double p,y;
	char a[500],b[500];
	scanf("%lf\n",&p);
	gets(a);
	gets(b);
	m=strlen(a);
	n=strlen(b);
	if(m!=n)
	{
		printf("error");
		return 0;
	}
	else
	{
		for(i=0;i<m;i++)
		{
			if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'||b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
			{
				printf("error");
				return 0;
			}
			else
			{
				if(a[i]==b[i])
				{
					x++;
				}
			}
		}
		y=(double)x/m;
		if(y>p)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
		return 0;
	}
}
