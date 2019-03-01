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
	int num[22][22],i,j,m,n;
	while(cin >> m >> n)
	{
		memset(num,0,sizeof(num));
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
			cin >> num[i][j];
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((num[i][j]>=num[i][j-1])&&(num[i][j]>=num[i][j+1])&&(num[i][j]>=num[i+1][j])&&(num[i][j]>=num[i-1][j]))
			{
				cout << i-1 << " " << j-1  << endl;
			}
		}
	}
	}
	return 0;
}
