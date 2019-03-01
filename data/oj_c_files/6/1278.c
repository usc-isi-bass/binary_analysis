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
	int n,x[100],y[100],m[100][100],i,j,k,count[100]={0};
	cin>>n;
	for(k=0;k<n;k++)
	{
		cin>>x[k]>>y[k];
		for(i=0;i<x[k];i++)
		{
			for(j=0;j<y[k];j++)
			{
				cin>>m[i][j];
				if(i==0||i==x[k]-1||j==0||j==y[k]-1)
					count[k]+=m[i][j];
			}
		}
	}
	for(k=0;k<n;k++)
		cout<<count[k]<<endl;
	return 0;
}
