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
	char c[100];
	int t,i,j,k,l;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",c);
		l=strlen(c);
		for(j=0;j<l;j++)
		{
			for(k=0;k<l;k++)
			{
				if(c[k]==c[j]&&k!=j) break;
			}
			if(k==l)
			{
				printf("%c\n",c[j]);
				break;
			}
			if(j==l-1) printf("no\n");
		}
	}
	return 0;
}

