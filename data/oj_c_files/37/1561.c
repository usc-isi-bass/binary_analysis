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
	int n,i,j;
	scanf("%d",&n);
	while(n--)
	{
		int len,flag=1;
		char c[100001];
		scanf("%s",c);
		len=strlen(c);
		for(i=0;i<len;i++)
		{
			int isbreak=0;
			for(j=0;j<i;j++)
			{
				if(c[j]==c[i])
				{
					isbreak=1;
					break;
				}
			}
			if(isbreak)continue;
			for(j=i+1;j<len;j++)
			{
				if(c[j]==c[i])
				{
					isbreak=1;
					break;
				}
			}
			if(isbreak)continue;
			printf("%c",c[i]);
			flag=0;
			break;
		}
		if(flag)
			printf("no");
		if(n)
			printf("\n");
	}
	return 0;
}