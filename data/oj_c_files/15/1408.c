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
	int n;
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	int x1,y1,x2,y2;
	int num;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0&&a[i][j-1]==255&&a[i-1][j]){
				x1=i;
				y1=j;
			}
			if(a[i][j]==0&&a[i][j+1]==255&&a[i+1][j]){
				x2=i;
				y2=j;
			}
		}
	}
	num=(x2-x1-1)*(y2-y1-1);
	printf("%d",num);
    return 0;
}