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
	int n,i,t;
	char zfc[100][21];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",zfc[i]);
		for(t=0;zfc[i][t]!=0;t++)
		{
			if(zfc[i][t]<'0'||(zfc[i][t]>'9'&&zfc[i][t]<'A')||(zfc[i][t]>'Z'&&zfc[i][t]<'_')||(zfc[i][t]>'_'&&zfc[i][t]<'a')||zfc[i][t]>'z')
			{
				printf("no\n");
				break;
			}
			else if(zfc[i][0]>='0'&&zfc[i][0]<='9')
			{
                printf("no\n");
				break;
			}
		}
		if(zfc[i][t]==0)
		{
			printf("yes\n");
		}
	}
	return 0;
}
	