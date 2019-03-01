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

void main()
{
	int n,i,j;
	int a[100],b[100][20];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=0)
		{
			for(j=1;j<=a[i];j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==0)
			printf("60\n");
		else
		{
			if(b[i][a[i]]+3*a[i]<=60)
				printf("%d\n",60-3*a[i]);
			for(j=1;j<=a[i];j++)
			{
				if((b[i][j]+3*j<=60)&&(b[i][j+1]+3*j+3>=63))
					printf("%d\n",60-3*j);
				else if(b[i][j]+3*j>=60&&b[i][j]+3*j<63)
					printf("%d\n",b[i][j]);
			}
		}
	}
}