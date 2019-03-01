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
	int t, j, k, i, num[200]={0};
	char a[1000], s[1000];
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%s",a);
		int f=0;
		int len=strlen(a);
		for(j=0;j<len;j++)
		{
			num[a[j]]++;
		}
		for(j=0;j<len;j++)
		{
			if(num[a[j]]==1)
			{
				f++;
				printf("%c", a[j]);
				break;
			}
		}
		if(f==0)
		{
			printf("no");
		}
		printf("\n");
		memset(num,0,sizeof(num));
	}
	return 0;
}
