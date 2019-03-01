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
	int i,n,j=0,temp,len,num,a[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		if(num%2==1)
		{
			a[j]=num;
			j++;			
		}
		if(i==n-1)
			len=j;
	}
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<a[0];
	for(i=1;i<len;i++)
		cout<<","<<a[i];
	cout<<endl;
	return 0;
}