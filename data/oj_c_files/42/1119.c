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
	signed n=0,k=0,sum=0; signed a[100000]={0};int i=0,j=0;
	cin>>n;
	sum=n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	for(i=0;i<sum;i++)
	{
		if(a[i]==k)
		{
			for(j=i;j<sum;j++)
			{
				a[j]=a[j+1];
			}
			sum--;
			i--;
		}
	}
	for(i=0;i<sum;i++)
	{
		cout<<a[i];
		if(i==sum-1)
		{
			cout<<endl;
			break;
		}
		cout<<" ";
	}
	return 0;
}