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

void main()
{
	int n,i,j,flag;
	char str[100][25];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++)
	{
		if((str[i][0]>='a'&&str[i][0]<='z')||(str[i][0]>='A'&&str[i][0]<='Z')||str[i][0]=='_')
			flag=0;
		else flag=1;
		if(flag==0)
		{
			for(j=1;str[i][j]!='\0';j++)
			{
				if((str[i][j]>='0'&&str[i][j]<='9')||(str[i][j]>='a'&&str[i][j]<='z')||(str[i][j]>='A'&&str[i][j]<='Z')||str[i][j]=='_')
					flag=0;
				else 
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
			printf("yes\n");
		else printf("no\n");
	}
}
