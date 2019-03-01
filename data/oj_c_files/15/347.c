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
	int n,i,j,a[100][100],p,q,r,s,mj;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0&&a[i][j+1]==0&&a[i+1][j]==0&&a[i+1][j+1]!=0)
			{
				p=j;
				q=i;
			}
			if(a[i][j]==0&&a[i-1][j]==0&&a[i][j-1]==0&&a[i-1][j-1]!=0)
			{
				r=i;
				s=j;
			}
		}
		mj=(r-p-1)*(s-q-1);
		printf("%d",mj);
		return 0;
}