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

int main( )
{	
	int k;
	cin>>k;//????
	while(k--)
	{
		int m,n,i,j;
		cin>>m>>n;
		int a[100][100];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];//????
		int sum=0;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				if(i==0||i==m-1||j==0||j==n-1)//??????
					sum+=a[i][j];//??
		cout<<sum<<endl;//??
	}
	return 0;
}