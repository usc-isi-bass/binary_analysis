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
	int n,i,j,a[100][100],num=0,v,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				for(k=j;;k++)
				{
					if(a[i][k]!=0)
					{
						break;
					}
				}
				for(v=i;;v++)
				{
					if(a[v][j]!=0)
					{
						break;
					}
				}
				num=(k-j-2)*(v-i-2);
				break;
			}
			if(num!=0)
				break;
		}
	}
		cout<<num<<endl;
		return 0;
}
	