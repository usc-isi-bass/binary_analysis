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

int main ()
{
	int day[5][9][9]={0};
	int n;
	cin>>day[0][4][4]>>n;
	int a[3]={-1,0,1};
	int b[3]={-1,0,1};
	for (int d=1;d<=4;d++)
	{
		for (int i=0;i<9;i++)
			for (int j=0;j<9;j++)
			{
				if (day[d-1][i][j]!=0)
				{
					for (int p=0;p<3;p++)
						for (int q=0;q<3;q++)
							day[d][i+a[p]][j+b[q]]+=day[d-1][i][j];
					day[d][i][j]+=day[d-1][i][j];
				}
			}
	}
	for (int i=0;i<9;i++)
	{
		for (int j=0;j<9;j++)
		{
			if (j!=0) cout<<" ";
			cout<<day[n][i][j];
		}
		cout<<endl;
	}
	
	return 0;
}