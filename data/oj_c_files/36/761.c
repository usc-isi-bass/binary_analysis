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
	char a[10000],b[10000];
	int i,j,l,h;
	scanf("%s%s",a,b);
	l=strlen(a);
	h=strlen(b);
	if(l!=h)
	{
		printf("NO");
	}
	else
	{
		for(i=0;i<l;i++)
		{
			for(j=0;j<h;j++)
			{
				if(a[i]==b[j])
				{
					b[j]=' ';
					break;
				}
			}
			if(j==h)
			{
				printf("NO");
				break;
			}
		}
		if(i==l)
		{
			printf("YES");
		}
	}
}