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
	int n,m,num[100][100];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>num[i][j];
	}
	for(int k=0;k<n+m-1;k++)
	{
		if(k<m)
		{
			for(int i=0;k>=i&&i<n;i++)
				cout<<num[i][k-i]<<endl;
		}
		else
		{
			for(int i=k-m+1;i<n&&k>=i;i++)
				cout<<num[i][k-i]<<endl;
		}
	}
	return 0;
}


