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
	int i,j,m,n;
	char str[50][20],str2[50][20];
	scanf("%d",&n);
	for(i=0;i<n;)
	{
		gets(str[i]);
		m=strlen(str[i]);
		if(str[i][m-2]=='e'&&str[i][m-1]=='r'||str[i][m-2]=='l'&&str[i][m-1]=='y')	
		{
			for(j=0;j<m-2;j++)	
			{	
				str2[i][j]=str[i][j];
			}
			str2[i][j]='\0';
			//printf("%d,%s",i,str2[i]);
			i++;
		}
		else if(str[i][m-3]=='i'&&str[i][m-2]=='n'&&str[i][m-1]=='g')
		{
			for(j=0;j<=m-3;j++)
			{	
				if(j<m-3)	str2[i][j]=str[i][j];
				else if(j==m-3)	str2[i][j]='\0';
			}
			str2[i][j]='\0';
			//printf("%d,%s",i,str2[i]);
			i++;
		}
	}
	for(i=0;i<n;i++)
	{	
		printf("%s\n",str2[i]);
	}
	return 0;
}