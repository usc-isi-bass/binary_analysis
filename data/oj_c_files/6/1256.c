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
	int t,m,n,array[100][100];
	int sum,i,j,k;
	cin>>t;
	for(i=0;i<t;i++)
	{
		sum=0;
		cin>>m>>n;
		for(j=0;j<m;j++)
			for(k=0;k<n;k++)
				cin>>array[j][k];
		for(j=0;j<m;j++)
			sum=sum+array[j][0]+array[j][n-1];
		for(k=0;k<n;k++)
			sum=sum+array[0][k]+array[m-1][k];
		cout<<sum-array[0][0]-array[0][n-1]-array[m-1][0]-array[m-1][n-1]<<endl;
	}
	cin.get();
	return 0;
}