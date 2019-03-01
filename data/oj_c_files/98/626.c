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
	char a[1000][42];
	int n,i,sum=0,len,k=0,j;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		len=strlen(a[i]);
		if(sum<80&&sum+len>80)
		{
			for(j=k;j<i-1;j++)
				cout<<a[j]<<" ";
			cout<<a[j]<<endl;
			sum=0;
			k=i;
			sum=sum+len+1;
		}
		else
			sum=sum+len+1;
		if(sum==80||sum==81)
			{
			for(j=k;j<=i-1;j++)
				cout<<a[j]<<" ";
			cout<<a[j]<<endl;
			sum=0;
			k=i+1;
		}

	}
	for(i=k;i<n-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-1]<<endl;
	return 0;
}