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
	char a[100][100];
	int i,j,sum=0,n,m,k;
	cin>>n;
	for(i = 1; i<=n;i++)
	for(j = 1; j<=n;j++)
	{
		cin>>a[i][j];
	}
	cin>>m;
	for(k = 0;k<m;k++)
	{
		for(i = 1; i<=n;i++)//????????
		for(j = 1; j<=n;j++)
		{
			if(a[i][j]=='@'+k)//?????????
			{
				if(a[i-1][j]=='.')
					a[i-1][j]='@'+k+1;
				if(a[i+1][j]=='.')
					a[i+1][j]='@'+k+1;
				if(a[i][j-1]=='.')
					a[i][j-1]='@'+k+1;
				if(a[i][j+1]=='.')
					a[i][j+1]='@'+k+1;
			}
		}
	}
	for(i = 1;i<=n;i++)
	for(j = 1;j<=n;j++)
	{
		for(k = 0;k<m;k++)//???????
		if(a[i][j]=='@'+k)
			sum++;
	}
	cout <<sum<<endl;

	return 0;
}
