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

main()
{
	int e,n,x,i,j;
	char s[100002];
	scanf("%d",&n);
	for(e=0;e<n;e++)
	{
		scanf("%s",s);
		x=strlen(s);
		int *b=(int *)malloc(x*sizeof(int));
		for(i=0;i<x;i++)
		{
			b[i]=0;
			for(j=0;j<x;j++)
			{
				if(s[j]==s[i])
				{
					b[i]++;
				}
			}
		}
		for(i=0;i<x;i++)
		{
			if(b[i]==1)
			{
				printf("%c\n",s[i]);
				break;
			}
			if(b[i]!=1&&i==(x-1))
			{
				printf("no\n");
			}
		}
	}
}