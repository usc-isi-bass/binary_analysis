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
	int i,n;
	scanf("%d",&n);
	char s[100][20];
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(s[i][0]=='_'||(s[i][0]>='a'&&s[i][0]<='z')||(s[i][0]>='A'&&s[i][0]<='Z'))
		{
			int j=1;
			for(;;j++)
			{
				if(s[i][j]=='_'||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='0'&&s[i][j]<='9'));
				else if(s[i][j]=='\0')
				{
					printf("yes\n");
					break;
				}
				else
				{
					printf("no\n");
					break;
				}
				
			}
		}
		else printf("no\n");
	}
}