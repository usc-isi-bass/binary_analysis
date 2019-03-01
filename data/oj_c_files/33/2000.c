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
	int n,i;
	char zfc[10000][256],*ps;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++)
	{
		for(ps=zfc[i];*ps!='\0';ps++)
		{
			if(*ps==65)
			{
				printf("T");
				
			}
			else if(*ps==84)
			{
				printf("A");
			}
			else if(*ps==71)
			{
				printf("C");
			}
			else if(*ps==67)
			{
				printf("G");
			}
		}
		printf("\n");
	}
	return 0;
}