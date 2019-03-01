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
	int n,sum=0;
	cin>>n;
	int i,j,k=0,s=0;
	char a[101][101];
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='@')
			{	a[i][j]=(char)(65);
				s++;
			}
		}
	int m;
	sum=s;
	cin>>m;
	for(k=1;k<m;k++)
	{	i=0;
		j=0;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				if( (int) (a[i][j])	==(64+k)	)
				{
					if(a[i+1][j]=='.')
					{	sum++;
						a[i+1][j]=(char)(65+k);
					}
					if(a[i-1][j]=='.')
					{	sum++;
						a[i-1][j]=(char)(65+k);
					}
					if(a[i][j+1]=='.')
					{	sum++;
						a[i][j+1]=(char)(65+k);
					}
					if(a[i][j-1]=='.')
					{	sum++;
						a[i][j-1]=(char)(65+k);
					}
				}
			}
	}
	cout<<sum<<endl;

	return 0;
}

	
	

