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
	int a[100][100],m,n,i,j;
	cin >>m>>n;
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
			cin>>a[j][i];
	}
	for(j=0;j<m;j++)
		for(i=0;i<n;i++)
		{
			if(j==0&&i!=0)
			{
				if(a[j][i]>=a[j][i-1]&&a[j][i]>=a[j][i+1]&&a[j][i]>=a[j+1][i])
					cout<<j<<" "<<i<<endl;
			}
			else if(j==0&&i==0)
			{
				if(a[j][i]>=a[j][i+1]&&a[j][i]>=a[j+1][i])
					cout<<j<<" "<<i<<endl;
			}
			else if(a[j][i]>=a[j][i-1]&&a[j][i]>=a[j][i+1]&&a[j][i]>=a[j-1][i]&&a[j][i]>=a[j+1][i])
				   cout<<j<<" "<<i<<endl;
		}
		return 0;
}