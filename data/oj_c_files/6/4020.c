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


int mat[MAX][MAX];
int main()
{
//	ifstream cin("a.txt");
	int k;
	cin>>k;
	while(k--)
	{
		int m,n,sum=0;
		cin>>m>>n;
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>mat[i][j];
		for(int j=0;j<n;j++)
		{
			if(m>1)
				sum+=mat[m-1][j];
			sum+=mat[0][j];
		}
		for(int i=1;i<m-1;i++)
		{
			if(n>1)
				sum+=mat[i][n-1];
			sum+=mat[i][0];
			
		}
		cout<<sum<<endl;
	}
	return 0;
}

