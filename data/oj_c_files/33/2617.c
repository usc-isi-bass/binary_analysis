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
	int n;
	scanf("%d",&n);
	char zfc[1000][1000];
	int i,j;
	int len;
	for (i=0;i<n;i++)
	{
		scanf("%s",zfc[i]);
		len=(strlen)(zfc[i]);
		for (j=0;j<len;j++)
		{
			if (zfc[i][j]==65)
			{
				zfc[i][j]=84;
				continue;
			}
			if (zfc[i][j]==84)
			{
				zfc[i][j]=65;
				continue;
			}
			if (zfc[i][j]==67)
			{
				zfc[i][j]=71;
				continue;
			}
			if (zfc[i][j]==71)
			{
				zfc[i][j]=67;
				continue;
			}


		}
		printf("%s\n",zfc[i]);
	}


	return 0;
}

