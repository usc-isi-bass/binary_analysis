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
	int num[5][11][11],day,pri;
	for(int i=0;i<=10;i++)
	{
		for(int j=0;j<=10;j++)
		{
			for(int b=0;b<=4;b++)
			{
				num[b][i][j]=0;
			}
		}
	}
	cin>>pri>>day;
	num[1][5][5]=pri;
	for(int t=1;t<=day;t++)
	{
		for(int i=1;i<=9;i++)
		{
			for(int j=1;j<=9;j++)
			{
				num[t+1][i][j]=num[t][i][j]*2+num[t][i-1][j]+num[t][i-1][j-1]+num[t][i-1][j+1]+num[t][i][j-1]+num[t][i][j+1]+num[t][i+1][j]+num[t][i+1][j-1]+num[t][i+1][j+1];
			}
		}
	}
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<9;j++)
		{
			cout<<num[day+1][i][j]<<" ";
		}
		cout<<num[(day+1)][i][9]<<endl;
	}

	return 0;
}