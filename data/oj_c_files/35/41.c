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

main()
{
	int number[100][100],max[100]={0},n,m,flag[100]={1},i,j,temp=0;
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&number[i][j]);
			if(temp<number[i][j])
			{
				max[i]=j;
				temp=number[i][j];
			}
		}
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
			if(number[i][max[j]]<number[j][max[j]])flag[j]=0;
		if(flag[j]==1)printf("%d+%d",j,max[j]);
	}
	temp=0;
	for(j=0;j<n;j++)temp+=flag[j];
	if(temp==0)printf("No");
}
