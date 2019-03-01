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
	int n,i,j,m;
	char s[1000][21];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",s[i]);
	for(i=0;i<n;i++)
	{
		if((s[i][0]>='0')&&(s[i][0]<='9'))
				printf("no\n");
		else
		{
			for(j=0;s[i][j]!='\0';j++)
			{
				m=0;
				if((s[i][j]>='A' && s[i][j]<='Z')||(s[i][j]>='a' && s[i][j]<='z')||s[i][j]=='_' ||((s[i][j]>='0')&&(s[i][j]<='9')))
					continue;
				else 
				{
					printf("no\n");
					m=1;
					break;
				}
				
				
			}
			if(m==1)
				continue;
			printf("yes\n");

		}
	}
	return 0;
}
