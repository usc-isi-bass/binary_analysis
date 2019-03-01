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
	int shandi[22][22]={0};
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j;
	for(i=1;i<m+1;i++)
	{
		for(j=1;j<n+1;j++)
		scanf("%d",&shandi[i][j]);
	}
	for(i=1;i<m+1;i++)
	{
		for(j=1;j<n+1;j++)
		if(shandi[i][j]>=shandi[i-1][j]&&shandi[i][j]>=shandi[i+1][j]&&shandi[i][j]>=shandi[i][j-1]&&shandi[i][j]>=shandi[i][j+1])
			printf("%d %d\n",i-1,j-1);
	}	
	return 0;
}
