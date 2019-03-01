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
	int i=0,n=1,j=0,k=0,m=0,sum=0;
	int min=10000,max=0,temp=0;
	int a[2000],b[2000];
	while(cin>>a[i])
	{
		if(cin.get()==',')
		{
			n++;
		}
		else
		{
			break;
		}
		i++;
	}
	i=0;
	while(cin>>b[i])
	{
		if(cin.get()!=',')
		{
			break;
		}
		i++;
	}
	/*for(j=0;j<n;j++)
	{
		if(a[j]<min)
		{
			min=a[j];
		}
		if(b[j]>max)
		{
			max=b[j];
		}
	}*/
	for(k=0;k<1000;k++)
	{
		temp=0;
		for(j=0;j<n;j++)
		{
			if(a[j]<=k&&b[j]>k)
			{
				temp++;
			}
		}
		if(temp>sum)
		{
			sum=temp;
		}
	}
	cout<<n<<" "<<sum<<endl;
	return 0;
}