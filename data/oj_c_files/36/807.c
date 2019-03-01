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
	int i,j,c,A,B;
	char a[100],b[100];
	scanf("%s %s",a,b);
	A=strlen(a);
	B=strlen(b);
	if(A!=B)
	{
		printf("NO");
	}
	else
	{
		for(i=0;i<A;i++)
		{
			for(j=0;j<A;j++)
			{
				if(a[i]==b[j])
				{
					b[j]='0';
					break;
				}
			}
		}
		c=0;
		for(i=0;i<A;i++)
		{
			if(b[i]!='0')
			{
				c=1;
				break;
			}
			else
			{
				c=0;
			}
		}
		if(c==1)
		{
			printf("NO");
		}
		else
		{
			printf("YES");
		}
	}
	return 0;
}