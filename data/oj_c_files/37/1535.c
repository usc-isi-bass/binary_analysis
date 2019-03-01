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
	int t,i,k,p,count=0,b=0;
	char a[100][100000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<t+1;i++)
	{
		for(k=0;k<strlen(a[i]);k++)
		{
			for(p=0;p<strlen(a[i]);p++)
			{
				if(a[i][k]==a[i][p]&&k!=p)
				{
					count++;
				}
			}
			if(count==0)
			{
				printf("%c\n",a[i][k]);
				break;
			}
			else
			{
				b++;
			}
			count=0;
		}
		if(b==strlen(a[i])&&i!=0)
			printf("no\n");
		b=0;
	}
	return 0;
}
	