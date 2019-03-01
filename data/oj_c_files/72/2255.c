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
	int raul[100][100],m,n,i,j;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&raul[i][j]);
		}

	}
	for(i=1;i<=m;i++)
	{
		raul[i][0]=0;
	}
	for(j=1;j<=n;j++)
	{
		raul[0][j]=0;
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(raul[i][j]>=raul[i+1][j]&&raul[i][j]>=raul[i-1][j]&&raul[i][j]>=raul[i][j-1]&&raul[i][j]>=raul[i][j+1])
					printf("%d %d\n",i-1,j-1);
		}
	}
	return 0;
}

