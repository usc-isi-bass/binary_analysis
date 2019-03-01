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
	int a[5][5]={0},i,j,maxi,maxj,g,max,k=0;
	for (i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin >> a[i][j];
	for (i=0;i<5;i++)
	{
		g=1;
		max=a[i][0];
		maxi=i;
		maxj=0;

		for(j=0;j<5;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				maxi=i;
				maxj=j;
			}
		}
		for(j=0;j<5;j++)
		{
			if (a[maxi][maxj] > a[j][maxj])
		{
			g=0;
			break;
		}
		}
		if (g!=0)
		{
			cout << maxi+1 << " "<< maxj+1 << " " << a[maxi][maxj] <<endl;
			k=1;
		}
	}
	if (k==0)
		cout << "not found" << endl;
	return 0;
}
