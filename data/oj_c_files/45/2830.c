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
	char a[50],b[50],i,j,m;
	scanf("%s %s", a,b);
	m=0;
	for(i=0;i<=strlen(b)-strlen(a);i++)
	{
		if(b[i]!=a[0])
		{
			continue;
		}
		for(j=0;j<strlen(a);j++)
		{
			if(b[i+j]==a[j])
			{
				m++;
			}
		}
		if(m==strlen(a))
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}