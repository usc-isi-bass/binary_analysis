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
	int n,flag=0,count=0,j,i=0,sum[100]={1};
	cin>>n;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=99;j>=0;j--)
		{
			if(sum[j]==0&&flag==0)
				continue;
			else
				flag=1;
			sum[j]*=2;
			if(sum[j]>=10)
			{
				sum[j]-=10;
				sum[j+1]+=1;
			}
		}
	}
	for(i=99;i>=0;i--)
	{
		if(sum[i]!=0)
		{
			for(j=i;j>=0;j--)
			{
				cout<<sum[j];
			}
			cout<<endl;
			break;
		}
	}
	return 0;
}