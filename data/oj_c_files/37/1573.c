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
	int n,i,j,k;
	int state;
	int status;
	char str[100000];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",str);
		status=1;
		for (j=0;j<strlen(str);j++)
		{
			state=0;
			if (str[j]!=1)
			{
				for (k=j+1;k<strlen(str);k++)
				{
					if (str[j]==str[k])
					{
						str[k]=1;
						state=1;
					}
				}
			}
			if (state)
			{
				str[j]=1;
			}
		}
		for (j=0;j<strlen(str);j++)
		{
			if (str[j]!=1)
			{
				printf("%c\n",str[j]);
				status=0;
				break;
			}
		}
		if (status)
		{
			printf("no\n");
		}
	}
	return 0;
}