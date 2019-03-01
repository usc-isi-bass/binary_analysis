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
	int i,n,k,j;
	scanf("%d",&n);
	char zfc[100001];
	for(i=0;i<n;i++)
	{
		scanf("%s",zfc);
		for(k=0;zfc[k];k++)
		{
			for(j=0;zfc[j];j++)
			{
				if(zfc[k]==zfc[j]&&k!=j)
				{
					break;
				}
			}
			if(zfc[j]=='\0')
			{
				printf("%c\n",zfc[k]);
				break;
			}
		}
		if(zfc[k]=='\0')
		{
			printf("no\n");
		}
	}
	return 0;
}
