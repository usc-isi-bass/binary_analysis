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
	int n,i=0,j=0,sum=0,a[100][100],k=0;//????
	int t=0;
	cin>>n;
	for(k=0;k<n;k++)//??n???
	{
		sum=0;
		for(i=0;i<n;i++)//????????
			for(j=0;j<n;j++)
				cin>>a[i][j];
		for(int q=0;q<n-1;q++)//??q?
		{
			for(i=0;i<n-q;i++)//???????
			{
				t=a[i][0];
				for(j=0;j<n-q;j++)
				{
					if(a[i][j]<t)
						t=a[i][j];
				}
				for(j=0;j<n-q;j++)//???
					a[i][j]=a[i][j]-t;
			}
			for(j=0;j<n-q;j++)//???????
			{
				t=a[0][j];
				for(i=0;i<n-q;i++)
				{
					if(a[i][j]<t)
						t=a[i][j];
				}
				for(i=0;i<n-q;i++)
					a[i][j]=a[i][j]-t;//???
			}
			sum=sum+a[1][1];
			for(i=1;i<n-q-1;i++)//???
				for(j=0;j<n-q;j++)
					a[i][j]=a[i+1][j];
			for(j=1;j<n-q-1;j++)//???
				for(i=0;i<n-q;i++)
					a[i][j]=a[i][j+1];
		}
		cout<<sum<<endl;//????
	}
	return 0;
}