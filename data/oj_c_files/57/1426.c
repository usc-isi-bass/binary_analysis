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
	int i,j,n,m;
	char zfc[100][40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++)
	{
		m=strlen(zfc[i]);
		for(j=0;zfc[i][j]!='\0';j++)
		{
			if(zfc[i][j]=='r'&&zfc[i][j+1]=='\0')
			{
				zfc[i][j-1]='\0';
				printf("%s\n",zfc[i]);
				break;
			}else if(zfc[i][j]=='y'&&zfc[i][j+1]=='\0')
			{
				zfc[i][j-1]='\0';
				printf("%s\n",zfc[i]);
				break;
			}else if(zfc[i][j]=='g'&&zfc[i][j+1]=='\0')
			{
				zfc[i][j-2]='\0';
				printf("%s\n",zfc[i]);
				break;
			}
		}
	}
	return 0;
}
