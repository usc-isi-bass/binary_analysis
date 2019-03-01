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
	int n,a[100][2],num[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
		num[i]=0;
		int b[100][100];
		for(int j=0;j<a[i][0];j++)
		{
			for(int k=0;k<a[i][1];k++)
			{
				cin>>b[j][k];
			}
		}
		for(int j=0;j<a[i][1];j++)
		{
			num[i]=num[i]+b[0][j];
		}
		for(int j=0;j<a[i][1];j++)
		{
			num[i]=num[i]+b[a[i][0]-1][j];
		}
		for(int j=1;j<a[i][0]-1;j++)
		{
			num[i]=num[i]+b[j][0];
		}
		for(int j=1;j<a[i][0]-1;j++)
		{
			num[i]=num[i]+b[j][a[i][1]-1];
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<endl;
	}
	return 0;
}