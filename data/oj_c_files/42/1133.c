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
	int n,m,i=1,j=1,k=1,sum=0,a[200000]={0};
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	for(i=1;i<=n;i++)
	{
		if(a[i]==m)
		{
			sum++;
		}
	}
	for(i=1;i<=n;i++)
	{
			if(a[i]==m)
			{
				for(k=1;k<1000;k++)
				{					                                        if(a[i+k]!=m)
						break;
				}
				for(j=i;j<=n-k;j++)
                                     a[j]=a[j+k];
			}
	}
	for(i=1;i<=n-sum-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-sum];
	return 0;
}

