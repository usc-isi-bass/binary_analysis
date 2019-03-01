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

int  main()
{
	char a[100];
	int i,x;
	gets(a);
	x=strlen(a);
	if (x%2==0)
	printf("NO\n");
	else
	{
		for (i=0;i<x;i++)
		{
			int k=0,j;
			for (j=0;j<x;j++)
			{
				if (a[j]==a[i]&&a[j]!=' ')
				k++;
			}
			if (k%2!=0)
			{
				printf("NO\n");
				return 0;
			}
		}
		printf("YES\n");
	}
}
			
