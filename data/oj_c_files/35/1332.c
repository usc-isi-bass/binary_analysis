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
	int i,j,k,h=0,m,n,r=0;
	int a[8][8];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0,k=0;j<n;j++)
		{
			if(a[i][j]>a[i][0])k=j;
		}
		for(j=0,h=0;j<m;j++)
		{
			if(a[j][k]<a[0][k])h=j;
		}
		if(h==i)
		{	printf("%d+%d\n",i,k);
		    r=1;
			break;
		}
	}
	if(r==0)
		printf("No");
	return 0;
}