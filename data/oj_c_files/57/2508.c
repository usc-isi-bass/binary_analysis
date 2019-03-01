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
	char c[100][100];
	int i,n,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%s",c[i]);
	for(i=1;i<=n;i++)
	{	
		for(j=0;;j++)
		{
			if (c[i][j]=='\0')
			{
				k=j-1;
				if(c[i][k]=='r')
				{
					for(j=0;j<k-1;j++)
					printf("%c",c[i][j]);
				}
				if(c[i][k]=='y')
				{
					for(j=0;j<k-1;j++)
					printf("%c",c[i][j]);
				}
				if(c[i][k]=='g')
				{
					for(j=0;j<k-2;j++)
					printf("%c",c[i][j]);
				}
				printf("\n");
				break;
			}
			
		}
	}

}