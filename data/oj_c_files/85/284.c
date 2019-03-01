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

void judge(char str[]);
void main()
{
	char c[100][100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",&c[i]);
	for(i=0;i<n;i++)
		judge(c[i]);
}
void judge(char str[])
{
	int j;
	if(str[0]!='_'&&(str[0]>'Z'||str[0]<'A')&&(str[0]>'z'||str[0]<'a'))
		printf("no\n");
	else
	{
		for(j=1;str[j]!='\0';j++)
		{
			if(str[j]!='_'&&(str[j]>'Z'||str[j]<'A')&&(str[j]>'z'||str[j]<'a')&&(str[j]<'0'||str[j]>'9'))
			{
				printf("no\n");
				break;
			}
		}
		if(str[j]=='\0')
			printf("yes\n");
	}
}