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

/*
 * ju.cpp
 *
 *  Created on: 2012-10-31
 *      Author: 7
 */
int main()
{
	int a[100][100];
	int n,i=0,j,k,l,min,sum=0;
	cin>>n;
	while(i<n)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				cin>>a[j][k];
			}
		}
		for(l=0;l<n-1;l++)
		{
			for(j=0;j<n-l;j++)
			{
				min=a[j][0];
							for(k=0;k<n-l;k++)
							{
								if(min>a[j][k])
								{
									min=a[j][k];
								}
							}
							for(k=0;k<n-l;k++)
							{
								a[j][k]-=min;
							}
			}
			for(k=0;k<n-l;k++)
			{
				min=a[0][k];
							for(j=0;j<n-l;j++)
							{
								if(min>a[j][k])
								{
									min=a[j][k];
								}
							}
							for(j=0;j<n-l;j++)
							{
								a[j][k]-=min;
							}
			}
			sum+=a[1][1];
			for(j=0;j<n-l;j++)
			{
				for(k=1;k<n-l;k++)
				{
					a[j][k]=a[j][k+1];
				}
			}
			for(k=0;k<n-l;k++)
			{
				for(j=1;j<n-l;j++)
				{
					a[j][k]=a[j+1][k];
				}
			}
		}
		//sum+=a[0][0];
		cout<<sum<<endl;
		sum=0;
		i++;
	}
}
