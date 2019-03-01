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
	int t,i,j,k,l;
	char c[100];
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		scanf("%s",c);
		l=strlen(c);
		for(i=0;i<=l-1;i++)
		{
			for(j=0;j<=l-1;j++)
			{
				if(c[i]==c[j]&&i!=j)
					break;
			}
			if(j==l)
				break;
		}
		if(i==l)
			printf("no\n");
		else
			printf("%c\n",c[i]);
	}
	return 0;
}