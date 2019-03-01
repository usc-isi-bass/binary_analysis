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
	int i,j,n,m;
	int high[21][21]={0};
	cin >> m >> n;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			cin >> high[i][j];
		}
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i==0&&j==0)
			{
				if (high[i+1][j]<=high[i][j]&&high[i][j+1]<=high[i][j])
				{
					cout << i << " " << j << endl;
				}
			}
			if (i==0&&j!=0)
			{
				if (high[i+1][j]<=high[i][j]&&high[i][j+1]<=high[i][j]&&high[i][j-1]<=high[i][j])
				{
					cout << i << " " << j << endl;
				}
			}
			if (i!=0&&j==0)
			{
				if (high[i+1][j]<=high[i][j]&&high[i][j+1]<=high[i][j]&&high[i-1][j]<=high[i][j])
				{
					cout << i << " " << j << endl;
				}
			}
			if (i!=0&&j!=0)
			{
				if (high[i+1][j]<=high[i][j]&&high[i][j+1]<=high[i][j]&&high[i-1][j]<=high[i][j]&&high[i][j-1]<=high[i][j])
				{
					cout << i << " " << j << endl;
				}
			}
		}
	}
	return 0;
}