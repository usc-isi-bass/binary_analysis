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
	int n,m,a[100][100],i,j,num=1,k,l,t;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	if(m==1)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cout<<a[i][j]<<endl;
			}
		}
		return 0;
	}
	k=0;
	l=0;
	while(1)
	{
		if(k<n&&l<m)
		cout<<a[k][l]<<endl;
		if(l!=0)
		{
			k++;l--;continue;
		}
		if(l==0)
		{
			t=k;
			k=0;
			l=t+1;
		}
		while(k>=n||l>=m)
		{
			k++;
			l--;
			if(l==0)
			{
				t=k;
				k=0;
				l=t+1;
			}
			if(l+k==m+n)
			{
				return 0;
			}
		}
	}
}
		
