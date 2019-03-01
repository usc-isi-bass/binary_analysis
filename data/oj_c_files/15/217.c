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
	int n,i,k,line=0,row=0,mianji;
	int p[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
			scanf("%d",&p[i][k]);
		
	}

    for(i=1;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
	    	if(p[i][k]==0&&p[i-1][k]==0)
			   row=row+1;
		}
	}

	for(k=1;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			if(p[i][k]==0&&p[i][k-1]==0)
				line=line+1;
		}
	}
	mianji=(line/2-1)*(row/2-1);
	printf("%d",mianji);
	return 0;
}


