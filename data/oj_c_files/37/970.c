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
	int t,i,k,m;
	char zfc[100001];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",zfc);
        for(k=0;zfc[k]!=0;k++)
		{
			for(m=0;zfc[m]!=0;m++)
			{
				if(zfc[m]==zfc[k]&&m!=k)
				{
					break;
				}
			}
			if(zfc[m]==0)
			{
				printf("%c\n",zfc[k]);
				break;
			}
		}
		if(zfc[k]==0)
		{
			printf("no\n");
		}
	}
	return 0;
}