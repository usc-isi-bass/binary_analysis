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
	int i,j,r,c,num=0,a[100][100],k;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	k=r*c;
	for(i=0;;i++)
	{
		for(j=i;j<=c-1-i;j++)
		{
			printf("%d\n",a[i][j]);
			num=num+1;
			
		}
		if(num==k)
				break;
		for(j=i+1;j<=r-1-i;j++)
		{
			printf("%d\n",a[j][c-i-1]);
			num=num+1;
			
		}
		if(num==k)
				break;
		for(j=c-i-2;j>=i;j--)
		{
			printf("%d\n",a[r-1-i][j]);
			num=num+1;
			
		}
		if(num==k)
				break;
		for(j=r-i-2;j>=(i+1);j--)
		{
			printf("%d\n",a[j][i]);
			num=num+1;
			
		}
		if(num==k)
				break;
	}
	
}
