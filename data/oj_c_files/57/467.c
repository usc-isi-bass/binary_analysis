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
	int n,i,j,m;
	char c[32];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c);
		m=strlen(c);
		if(c[m-1]=='y')
		{for(j=0;j<m-2;j++)
		printf("%c",c[j]);
		printf("\n");
		}
		else if(c[m-1]=='r')
		{for(j=0;j<m-2;j++)
		printf("%c",c[j]);
		printf("\n");
		}
		else
		{for(j=0;j<m-3;j++)
		printf("%c",c[j]);
		printf("\n");
		}
	}
return 0;
}