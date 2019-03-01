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

int main(int argc, char* argv[])
{
	int n,i,j,len;
	char jianji[1000][300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",jianji[i]);
	}
	for (i=0;i<n;i++)
	{
		len=strlen(jianji[i]);
		for (j=0;j<len;j++)
		{
			if (jianji[i][j]=='A')
			{
				jianji[i][j]='T';
			}
			else if (jianji[i][j]=='T')
			{
				jianji[i][j]='A';
			}
			else if (jianji[i][j]=='C')
			{
				jianji[i][j]='G';
			}
			else if (jianji[i][j]=='G')
			{
				jianji[i][j]='C';
			}
		}
	
	}
	for (i=0;i<n;i++)
	{
		printf("%s\n",jianji[i]);
	}
	return 0;
}
