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
	int n,m,i,j,max,flag=0,s,a[10][10];
	scanf("%d,%d",&m,&n);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<m;i++)
	{
		max=0;
		for (j=1;j<n;j++)
			if (a[i][j]>a[i][max]) max=j;
			s=1;
		for (j=0;j<m;j++)
			if (a[j][max]<a[i][max])
			{
				s=0;
				break;
			}
		if (s==1)
		{
			printf("%d+%d\n",i,max);
			flag=1;
			break;
		}
	}
	if (flag==0) printf("No");
	return 0;
}