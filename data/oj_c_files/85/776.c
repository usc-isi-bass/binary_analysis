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


int decide(char k)
{
	if ((isdigit(k)==0)&&(isalpha(k)==0)&&(k!=95))
		return 0;
	else
		if (isdigit(k)==1)
			return 2;
		else
			return 1;
}


int main()
{
	int n,j,m,i;
	char a[500][20]={0};
	scanf("%d\n",&n);
	for (i=1;i<=n;i++)
	{
		gets(a[i]);
		m=strlen(a[i]);
		if (decide(a[i][0])!=1)
		{
			printf("no\n");
			continue;
		}
		else
		{
			j=1;
			while (j<m)
			{
				if (decide(a[i][j])==0)
					j=m+2;
				else
					j=j+1;
			}
			if (j==m)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
return 0;
}