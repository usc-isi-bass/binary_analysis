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

//***************************************
//??2?N??
int main()
{
	int n;
	double a[1000]={0};
	cin>>n;
	a[999]=2;
	if(n==0)
		cout<<1;
	else
	{
		for(int i=0;i<n-1;i++)
			for(int j=999;j>=0;j--)
			{
				if(a[j]+a[j]<10)
					a[j]=a[j]*2;
				else
				{
					a[j]=a[j]*2-10;
					a[j-1]=0.5+a[j-1];
				}
			}
		int m=0;
		for(int i=0;i<1000;i++)
		{
			if(a[i]!=0)
			{
				cout<<a[i];
				m=i;
				break;
			}
		}
		for(int i=m+1;i<1000;i++)
			cout<<a[i];
	}
	return 0;
}