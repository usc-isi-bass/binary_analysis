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
	int a[100][100]={0};
	int row=0,col=-1,i,j,m,n,t=1,p=0;
	cin>>m>>n;
	int k=m*n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];

	do
	{
		for(i=0;i<n;i++)
		{
			col+=t;
			cout << a[row][col] << endl;

			p++;
		}
		n--;
		m--;
		for(i=0;i<m;i++)
		{
			row+=t;
			cout << a[row][col]<<endl;
			p++;
		}
		t=-t;
	}while (p<k);
	return 0;
}