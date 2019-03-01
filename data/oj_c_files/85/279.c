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
	int i,j,n,m,k;
	char c[100][1000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%s",c[i]);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<strlen(c[i]);j++)
			if(c[i][0]>='0'&&c[i][0]<='9')
            {
				printf("no\n");
				goto loop;
			}
			else if(c[i][j]=='_')
				continue;
			else if(c[i][j]>='A'&&c[i][j]<='Z')
				continue;
			else if(c[i][j]>='a'&&c[i][j]<='z')
				continue;
			else if(c[i][j]>='0'&&c[i][j]<='9')
				continue;
			else 
			{
				printf("no\n");
				goto loop;
			}
			printf("yes\n");
        loop:;
	}
}
