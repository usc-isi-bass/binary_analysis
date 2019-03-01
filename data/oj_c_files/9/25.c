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
	int n,i,j,h=0,k=1,b=0;
	char a[120][20],c[120][20];
	int y[120],Z[155][100]={0},cy[120];
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		scanf("%s %d",a[i],&y[i]);
	}

	for(i=60;i<=150;i++)
	{
		for(j=1;j<=n;j++)
		{
			Z[i][h]=0;
			if(i==y[j])
			{
				Z[i][h]=j;
				h++;
			}
		}
		h=0;
	
	}
	for(i=1;i<=n;i++)
	{
		if(y[i]<60)
		{
			strcpy(c[k],a[i]);
			cy[k]=y[i];
            b=k;
			k++;
		}
	}

	h=0;
	for(i=150;i>=60;i--)
	{
		for(h=0;h<=10;h++)
		{
			if(Z[i][h]==0) break;
		    else
			{
				printf("%s\n",a[Z[i][h]]);
			}
		}
	}
	for(i=1;i<=b;i++)
	{
		printf("%s\n",c[i]);
	}
	return 0;








	


}

