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
	int m,n[1000][1000],ai,aj,zi,zj,i,j,s;
	scanf("%d",&m);
	for (i=0;i<m;i++)
	{
	for(j=0;j<m;j++)
	{
	scanf("%d",&n[i][j]);
		if (n[i][j]==0)
		{
		zi=i;zj=j;
		}
	
	}
	}
	for (i=(m-1);i>=0;i--)
	{
	for(j=(m-1);j>=0;j--)
	{

		if (n[i][j]==0)
		{
		ai=i;aj=j;
		}
	
	}
	}
    s=(zj-aj-1)*(zi-ai-1);
	printf("%d\n",s);
	return 0;
}