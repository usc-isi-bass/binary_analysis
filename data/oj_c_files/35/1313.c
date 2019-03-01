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
	int a[8][8],m,n,i,j,k=0,max[8]={0},min[8];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			max[i]=a[i][j]>max[i]?a[i][j]:max[i];
        for(j=0;j<n;j++)
		{min[j]=a[1][j];
			for(i=0;i<m;i++)
				min[j]=a[i][j]<min[j]?a[i][j]:min[j];}
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(max[i]==min[j])
			{printf("%d+%d\n",i,j);
			k=1;}
    if(k==0)
		printf("No\n");
}


