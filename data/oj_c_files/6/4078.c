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
	int i,j,k,l;
	cin>>k;
	for(l=0;l<k;l++)
	{
		int a[100][100],m,n;
		int *p;
		cin>>m>>n;
		for(i=0;i<m;i++)
		 for(j=0;j<n;j++)
		 cin>>a[i][j];
		int sum=0;
		for(i=0;i<n;i++)
		{
			p=&a[0][i];
			sum+=*p;
		}
		if(m!=1)
		for(i=0;i<n;i++)
		{
			p=&a[m-1][i];
			sum+=*p;
		}
		for(i=1;i<m-1;i++)
		{
			p=a[i];
			sum+=*p;
		}
		for(i=1;i<m-1;i++)
		{
			p=&a[i][n-1];
			sum+=*p;
		}
		cout<<sum<<endl;
	}
	return 0;
}