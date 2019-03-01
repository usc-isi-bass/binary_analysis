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
	int a[100]={0};
	a[0]=1;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<100;j++)
		{
			a[j]*=2;
		}
		for(int j=0;j<100;j++)
		{
			if(a[j]>=10)
			{
				a[j]-=10;
				a[j+1]++;
			}
		}
	}
	int len=0;
	for(int i=99;i>=0;i--)
	{
		if(a[i]!=0)
		{
			len=i;
			break;
		}
	}
	for(int i=len;i>=0;i--)
	{
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}