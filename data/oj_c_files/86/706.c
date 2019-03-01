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
	int n,i,j;
	scanf("%d",&n);
	int time[50],a[50][100];
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&time[i]);
		for(j=0;j<time[i];j++)
			scanf("%d",&a[i][j]);

	}
	for(i=0;i<n;i++)
	{
		if(time[i]==0)
			printf("60");
		else if(a[i][time[i]-1]<=60-3*time[i])
			printf("%d",60-3*time[i]);
		else 
			for(j=0;j<time[i];j++)
			{
				if(a[i][j]<60-(j+1)*3&&a[i][j+1]>60-(j+2)*3)
				{
					if(60-(j+1)*3>=a[i][j+1])
						printf("%d",a[i][j+1]);
					else
						printf("%d",60-(j+1)*3);
				}
			}
			printf("\n");
	}
	return 0;
}