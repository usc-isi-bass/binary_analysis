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

int main ()
{
	int n;
	cin>>n;
	if(n==0) cout<<"1"<<endl;
	int k=99;
	int a[100]={2};
	for(int i=0;i<n-1&&n!=0;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[j]=a[j]*2;
		}
		for(int j=0;j<n;j++)
		{
			if(a[j]>=10)
			{
				a[j+1]=a[j+1]+a[j]/10;
				a[j]=a[j]%10;
			}
		}
	}

	while(a[k]==0)
		k--;
	for(int j=k;j>=0&&n!=0;j--)
		cout<<a[j];
	cout<<endl;
	return 0;
}
