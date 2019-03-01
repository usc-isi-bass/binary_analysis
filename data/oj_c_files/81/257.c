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
	int x[5][5],m,n,i,j;
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			scanf("%d",&x[i][j]);
	scanf("%d%d",&n,&m);
	if(n>=0&&n<=4&&m>=0&&m<=4)
	{
		for(i=0;i<=4;i++)
			{
			  j=x[n][i];
	          x[n][i]=x[m][i];
			  x[m][i]=j;
		     }
        for(i=0;i<=4;i++)
			for(j=0;j<=4;j++)
				{
					printf("%d",x[i][j]);
					if(j==4) 
						printf("\n");
					else
						printf(" ");
			     }
	}
	else printf("error");

	return 0;
}